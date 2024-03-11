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
        cout << number << endl;
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

class Car : public Transport {
private:
    string mark;
public:
    Car() : Transport(), mark("-") {}
    Car(string num, size_t whe, int agel, string mar) : Transport(num, whe, agel), mark(mar) {}

    string getMark() const {
        return mark;
    }

    void in(istream&) override;
    void out(ostream&) const override;
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
class Taxi : public Transport {
private:
    double price;
public:
    Taxi() : Transport(), price(0) {}
    Taxi(string num, size_t whe, int agel, int pr) : Transport(num, whe, agel), price(pr) {}

    double getMark() const {
        return price;
    }

    void in(istream&) override;
    void out(ostream&) const override;
};

Car* setCar(const string namefile, int& count);
void displayCar(const string namefile, Car* c, int count);

Taxi* setTaxi(const string namefile, int& count);
void displayTaxi(const string namefile, Taxi* t, int count);
Bolt* setBolt(const string namefile, int& count);
void displayBolt(const string namefile, Bolt* b, int count);

Bike* setBike(const string namefile, int& count);
void displayBike(const string namefile, Bike* b, int count);