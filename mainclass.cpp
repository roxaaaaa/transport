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

void Car::in(istream& is) {
    is >> number >> wheels >> ageLimit >> mark;
}
void Car::out(ostream& os) const {
    os << "Number: " << number << "\tWheels: " << wheels << "\tAgeLimit: " << ageLimit << "\tMark: " << mark;
}

void Bike::in(istream& is) {
    is >> number >> wheels >> ageLimit >> model;
}
void Bike::out(ostream& os) const {
    os << "Number: " << number << "\tWheels: " << wheels << "\tAgeLimit: " << ageLimit << "\tModel: " << model;
}
Bolt* setBolt(const string namefile, int& count) {
    ifstream input(namefile);
    if (!input.is_open()) {
        cout << "Error opening file!" << endl;
        exit(0);
    }

    input.ignore(1000, '.');

    input >> count;
    Bolt* bolts = new Bolt[count];

    for (size_t i = 0; i < count; i++) {
        input >> bolts[i];
    }

    input.close();

    return bolts;
}

void displayBolt(const string namefile, Bolt* b, int count) {
    ofstream output(namefile, ios::app);
    if (!output.is_open()) {
        cout << "Error opening file!" << endl;
        exit(0);
    }

    for (size_t i = 0; i < count; i++) {
        output << b[i] << endl;
    }

    output.close();
}

Bike* setBike(const string namefile, int& count) {
    ifstream input(namefile);
    if (!input.is_open()) {
        cout << "Error opening file!" << endl;
        exit(0);
    }

    input.ignore(1000, '+');

    input >> count;
    Bike* bikes = new Bike[count];

    for (size_t i = 0; i < count; i++) {
        input >> bikes[i];
    }

    input.close();

    return bikes;
}

void displayBike(const string namefile, Bike* b, int count) {
    ofstream output(namefile, ios::app);
    if (!output.is_open()) {
        cout << "Error opening file!" << endl;
        exit(0);
    }

    for (size_t i = 0; i < count; i++) {
        output << b[i] << endl;
    }

    output.close();
}
void Bolt::in(istream& is) {
    is >> number >> wheels >> ageLimit >> time;
}
void Bolt::out(ostream& os) const {
    os << "Number: " << number << "\tWheels: " << wheels << "\tAgeLimit: " << ageLimit << "\tTime: " << time;
}



Car* setCar(const string namefile, int& count) {
    ifstream input(namefile);
    if (!input.is_open()) {
        cout << "Error opening file!" << endl;
        exit(0);
    }

    input.ignore(1000, '-');

    input >> count;
    Car* cars = new Car[count];

    for (size_t i = 0; i < count; i++) {
        input >> cars[i];
    }

    input.close();

    return cars;
}

void displayCar(const string namefile, Car* c, int count)
{
    ofstream output(namefile, ios::app);
    if (!output.is_open()) {
        cout << "Error opening file!" << endl;
        exit(0);
    }

    for (size_t i = 0; i < count; i++) {
        output << c[i] << endl;
    }

    output.close();
}

void Taxi::in(istream& is) {
    is >> number >> wheels >> ageLimit >> price;
}
void Taxi::out(ostream& os) const {
    os << "Number: " << number << "\tWheels: " << wheels << "\tAgeLimit: " << ageLimit << "\tPrice: " << price;
}
Taxi* setTaxi(const string namefile, int& count) {
    ifstream input(namefile);
    if (!input.is_open()) {
        cout << "Error opening file!" << endl;
        exit(0);
    }

    input.ignore(1000, '=');

    input >> count;
    Taxi* taxes = new Taxi[count];

    for (size_t i = 0; i < count; i++) {
        input >> taxes[i];
    }

    input.close();

    return taxes;
}
void displayTaxi(const string namefile, Taxi* t, int count) {
    ofstream output(namefile, ios::app);
    if (!output.is_open()) {
        cout << "Error opening file!" << endl;
        exit(0);
    }

    for (size_t i = 0; i < count; i++) {
        output << t[i] << endl;
    }

    output.close();
}
