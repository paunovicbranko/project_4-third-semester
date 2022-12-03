#include "Igrac.h"
#include "Tim.h"
#include "Privilegovani.h"
#include "Greske.h"
#include "Mec.h"

int main() {
	try {
		Igrac I1("Branko");
		Igrac I2("Luka", 970);
		Igrac I3("Branko", 1000);
		Igrac I4("Aleksa", 610);

		//cout << I1 << endl;
		//I2.smanjiVr(15);
		//bool a = I1 == I3;
		//cout << a << endl;
		//cout << I2 << endl;
		//cout << endl;

		Tim T1("Kraljevi", 10);
		T1.dodajIgraca(3, &I2);
		T1.dodajIgraca(2, &I1);
		//cout << T1;

		Tim T2("Carevi", 10);
		T2.dodajIgraca(2, &I1);
		T2.dodajIgraca(7, &I4);
		//cout << endl;
		//cout << T2;
		//cout << endl;
		//bool b = T1 == T2;
		//cout << b << endl;

		
		//cout << *T1[2] << endl;
		//cout << T1.dohVrednostTima() << endl;
		Privilegovani P("Novi", 10, 500);
		//P.dodajIgraca(3, &I1);
		P.dodajIgraca(1, &I1);
		P.dodajIgraca(6, &I4);
		//cout << P;
		Tim* T3 = &P;

		Mec m1(&T1, T3);
		Mec m2(&T2, T3);
		Mec m3(&T2, &T1);
		m1.odigrajMec();
		m2.odigrajMec();
		m3.odigrajMec();

		cout << m1 << endl;
		cout << m2 << endl;
		cout << m3 << endl;
		cout << P;
	}
	catch (GUslov& u) {
		cout << u;
	}
	catch (GNijeOdigrano o) {
		cout << o;
	}

}