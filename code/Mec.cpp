#include "Mec.h"
#include "Greske.h"

void Mec::odigrajMec()
{
	int pobeda = 3;
	int nereseno = 1;
	int poraz = 0;
	x = true;
	if (timovi.dohP1().dohVrednostTima() > timovi.dohP2().dohVrednostTima()) {
		ishod = POBEDA_DOMACIN; 
		poeni = { &pobeda, &poraz };

		for (int i = 0; i < timovi.dohP1().dohKap(); i++) {
			if (timovi.dohP1()[i] == nullptr) continue;
			timovi.dohP1()[i]->povecajVr(10);
		}
		for (int i = 0; i < timovi.dohP2().dohKap(); i++) {
			if (timovi.dohP2()[i] == nullptr) continue;
			timovi.dohP2()[i]->smanjiVr(10);
		}
	}
	else if (timovi.dohP1().dohVrednostTima() < timovi.dohP2().dohVrednostTima()) { 
		ishod = POBEDA_GOST;
		poeni = { &poraz, &pobeda };
		for (int i = 0; i < timovi.dohP2().dohKap(); i++) {
			if (timovi.dohP2()[i] == nullptr) continue;
			timovi.dohP2()[i]->povecajVr(10);
		}
		for (int i = 0; i < timovi.dohP1().dohKap(); i++) {
			if (timovi.dohP1()[i] == nullptr) continue;
			timovi.dohP1()[i]->smanjiVr(10);
		}
	}
	else {
		ishod = NERESENO;
		poeni = { &nereseno, &nereseno };
	}
}

Par<int> Mec::dohPoene()
{
	if (proveri()) throw GNijeOdigrano();
	return poeni;
}

ostream& operator<<(ostream& it, const Mec& m)
{
	it << m.timovi;
	if (m.proveri()) {
		switch (m.ishod) {
		case 0:
			it << "POBEDA_DOMACIN";
			break;
		case 1:
			it << "NERESENO";
			break;
		case 2:
			it << "POBEDA GOST";
			break;
		}
	}
	return it;
}
