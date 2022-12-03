#ifndef _par_h_
#define _par_h_
#include <iostream>
using namespace std;

template<typename T>
class Par
{
	T* p1, * p2;
public:

	Par(T* p1, T* p2) :p1(p1), p2(p2){}
	T& dohP1()const { return *p1; }
	T& dohP2()const { return *p2; }
	void postaviP1(const T& t1) { p1 = t1; }
	void postaviP2(const T& t2) { p2 = t2; }

	friend bool operator==(const Par& par1, const Par& par2) {
		return *par1.p1 == *par2.p1 && *par1.p2 == *par2.p2;
	}

	friend ostream& operator<<(ostream& it, const Par& p) {
		return it << "[" << p.dohP1() << "-" << p.dohP2() << "]";
	}

};

#endif