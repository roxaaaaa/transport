#include "mainclass.h"

void Transport::in(istream& is) {
    is >> number >> wheels >> ageLimit;
}

void Transport::out(ostream& os) const {
    os << "Number: " << number << "\tWheels: " << wheels << "\tAgeLimit: " << ageLimit << endl;
}

istream& operator>>(istream& is, Transport& t) {
    t.in(is);
    return is;
}
ostream& operator<<(ostream& os, const Transport& t) {
    t.out(os);
    return os;
}