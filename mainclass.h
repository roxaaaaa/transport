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
class Bike : public Transport {
private:
    string model;
public:
    Bike() : Transport(), model("-") {}
    Bike(string num, size_t whe, int agel, string mo) : Transport(num, whe, agel), model(mo) {}

    string getMark() const {
        return model;
    }

    void in(istream&) override;
    void out(ostream&) const override;
};
class Bolt : public Transport {
private:
    int time;
public:
    Bolt() : Transport(), time(0) {}
    Bolt(string num, size_t whe, int agel, int ti) : Transport(num, whe, agel), time(ti) {}

    int getMark() const {
        return time;
    }

    void in(istream&) override;
    void out(ostream&) const override;
};
Bolt* setBolt(const string namefile, int& count);
void displayBolt(const string namefile, Bolt* b, int count);

Bike* setBike(const string namefile, int& count);
void displayBike(const string namefile, Bike* b, int count);