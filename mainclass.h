#pragma once
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Transport {
protected:
    string number;
    size_t wheels;
    int ageLimit;
public:
    Transport() : number("-"), wheels(0), ageLimit(0) {}
    Transport(string num, size_t whe, int agel) : number(num), wheels(whe), ageLimit(agel) {}

    string getNumber() const {
        return number;
    }
    size_t getWheels() const {
        return wheels;
    }
    int getAgeLim() const {
        return ageLimit;
    }

    void setNumber(string num) {
        number = num;
    }
    void setWheels(size_t whe) {
        wheels = whe;
    }
    void setAgeLim(int agel) {
        ageLimit = agel;
    }

    virtual void in(istream&);
    virtual void out(ostream&) const;

    friend istream& operator>>(istream& is, Transport& t);
    friend ostream& operator<<(ostream& os, const Transport& t);
};