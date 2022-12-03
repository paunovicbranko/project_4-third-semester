#ifndef _tim_h_
#define _tim_h_
#include "Igrac.h"
class Tim
{
protected:

	string naziv;
	int kapacitet;
	int trBroj;
	const int k = kapacitet;

	Igrac** niz;
	virtual void pisi(ostream& it) const;

public:

	Tim(string naziv, const int kapacitet) : naziv(naziv), kapacitet(kapacitet) {

		trBroj = 0;
		niz = new Igrac *[kapacitet];
		for (int i = 0; i < kapacitet; i++) { niz[i] = nullptr; }
	}

	int dohTr() const { return trBroj; }
	int dohKap() const { return kapacitet; }
	virtual void dodajIgraca(int pozicija, Igrac* I);
	Igrac* operator[](int i);
	double dohVrednostTima() const;
	bool operator==(Tim T1);
	friend ostream& operator<<(ostream& it, const Tim T1);
};

#endif