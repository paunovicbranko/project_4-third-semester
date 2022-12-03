#ifndef _Mec_h_
#define _Mec_h_
#include "Par.h"
#include "Tim.h"
#include "Privilegovani.h"


class Mec
{
	Par<Tim> timovi;
	bool x;
	Par<int> poeni;

public:
	enum Ishod{ POBEDA_DOMACIN, NERESENO, POBEDA_GOST };
	Ishod ishod;
	Mec(Tim *t1, Tim *t2):timovi(t1, t2), poeni(0, 0) {}

	Par<Tim> dohParTimova()const { return timovi; }
	void odigrajMec();
	bool proveri() const { return x; }
	Par<int> dohPoene();

	friend ostream& operator<<(ostream& it, const Mec& m);
};

#endif