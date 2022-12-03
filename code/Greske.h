#ifndef _greske_h_
#define _greske_h_
#include <iostream>



class GNemaIgraca {
public:
	friend std::ostream& operator<<(std::ostream& it, GNemaIgraca& g) {
		return it << "Nema igraca na toj poziciji!" << std::endl;
	}
};

class GUslov {
public:
	friend std::ostream& operator<<(std::ostream& it, GUslov& g) {
		return it << "Igrac nije dovoljno dobar za tim!" << std::endl;
	}
};
class GNijeOdigrano {
public:
	friend std::ostream& operator<<(std::ostream& it, GNijeOdigrano& g) {
		return it << "Mec nije odigran!" << std::endl;
	}
};
#endif
