#include "Igrac.h"

void Igrac::povecajVr(int procenat)
{
	vrednost = vrednost + vrednost * procenat / 100;
}

void Igrac::smanjiVr(int procenat)
{
	vrednost = vrednost - vrednost * procenat / 100;
}

bool Igrac::operator==(Igrac i2)
{
	if (this->vrednost == i2.vrednost && this->ime == i2.ime) return true;
	else return false;
}

ostream& operator<<(ostream& it, Igrac i)
{
	return it << i.ime << "#" << i.vrednost;
}
