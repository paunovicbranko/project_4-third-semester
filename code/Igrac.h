#ifndef _igrac_h_
#define _igrac_h_
#include <string>
#include <iostream>
using namespace std;

class Igrac
{
private:

	string ime;
	int vrednost;

public:

	Igrac(string ime, int vrednost = 1000) :ime(ime), vrednost(vrednost) {} ;

	int dohVrednost() const { return vrednost; }
	

	void povecajVr(int procenat);
	void smanjiVr(int procenat);

	bool operator==(Igrac i2);
	friend ostream& operator<<(ostream& it, Igrac i);
};

#endif