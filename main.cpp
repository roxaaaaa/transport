#include "mainclass.h"

int main() {
	int countC = 0, countB = 0, countT = 0;

	Car* cars = setCar("text.txt", countC);
	Bike* bikes = setBike("text.txt", countB);
	Taxi* taxes = setTaxi("text.txt", countT);

	displayCar("text.txt", cars, countC);
	displayBike("text.txt", bikes, countB);
	displayTaxi("text.txt", taxes, countT);

	delete[] cars, bikes, taxes;

	return 0;
}