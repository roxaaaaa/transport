#include "mainclass.h"

int main() {
    int countC = 0, countB = 0, countT = 0, count=0;

    Car* cars = setCar("text.txt", countC);
    Bike* bikes = setBike("text.txt", countB);
    Taxi* taxes = setTaxi("text.txt", countT);
    Bolt* bolts = setBolt("text.txt", count);

    displayCar("text.txt", cars, countC);
    displayBike("text.txt", bikes, countB);
    displayTaxi("text.txt", taxes, countT);
    displayBolt("text.txt", bolts, count);
    delete[] cars, bikes, taxes, bolts;


	return 0;
}