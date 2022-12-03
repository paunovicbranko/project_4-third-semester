#ifndef _privilegovani_h_
#define _privilegovani_h_
#include "Tim.h"

class Privilegovani : public Tim
{
private:
	int minUslov;

public:
	Privilegovani(string naziv, const int kapacitet, int minUslov):Tim(naziv, kapacitet), minUslov(minUslov){}

	void dodajIgraca(int pozicija, Igrac* I) override;
	void pisi(ostream& it)const override;
	friend ostream& operator<<(ostream& it, Privilegovani P);
};

#endif