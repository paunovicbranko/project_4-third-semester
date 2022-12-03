#include "Privilegovani.h"
#include "Greske.h"

void Privilegovani::dodajIgraca(int pozicija, Igrac* I)
{
	if (I->dohVrednost() < minUslov) throw GUslov();
	//if (niz[pozicija] != nullptr) throw GZauzetaPozicija();
	niz[pozicija] = I;
}

void Privilegovani::pisi(ostream& it) const
{
	it << this->naziv << "(" << minUslov << ")" << "[";

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

ostream& operator<<(ostream& it, Privilegovani P)
{
	P.pisi(it);
	return it;
}
