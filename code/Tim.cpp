#include "Tim.h"
#include "Greske.h"

void Tim::dodajIgraca(int pozicija, Igrac *I)
{
	
	niz[pozicija] = I;
}


void Tim::pisi(ostream& it) const
{
	it << this->naziv << "[";
	
	//Pronalazenje indeksa poslednjeg igraca u nizu:
	int pom;
	for (int i = 0; i < this->kapacitet; i++) {
		if (this->niz[i] != nullptr) pom = i;
	}

	for (int i = 0; i < this->kapacitet; i++) {
		if (this->niz[i] == nullptr) continue;
		if (i != pom) it << *(this->niz[i]) << ", ";
		else it << *(this->niz[i]);
	}
	it << "]";
}





Igrac* Tim::operator[](int i)
{

	//if (niz[i] == nullptr) throw GNemaIgraca();
	return niz[i];
	
}

double Tim::dohVrednostTima() const
{
	int temp = 0;
	int pom = 0;
	for (int i = 0; i < kapacitet; i++) {
		if (niz[i] != nullptr) {
			temp += niz[i]->dohVrednost();
			pom += 1;
		}
	}
	temp /= pom;
	return temp;
}

bool Tim::operator==(Tim T1)
{
	bool temp;
	if (this->kapacitet != T1.kapacitet  or this->naziv != T1.naziv) return false;
	for (int i = 0; i < kapacitet; i++) {
		if (this->niz[i] == T1.niz[i]) temp = true;
		else return false;
	}
	return temp;
}

ostream& operator<<(ostream& it, const Tim T1)
{	
	T1.pisi(it);
	return it;
}
