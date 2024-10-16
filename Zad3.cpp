#include <iostream>
using namespace std;

class Car {
public:
	string make;
	string model;
	int year;

	int currentYear = 2024;

	Car(string make, string model, int year) {
		this->make = make;
		this->model = model;
		this->year = year;
	}

	void displayInfo() {
		cout << make << " " << model << " " << year << endl;
	}

	int getCarAge() {
		return currentYear - year; 
	}
	
	~Car(){}
};

bool isSameCar(Car car1, Car car2) {
	if (car1.make == car2.make && car1.model == car2.model && car1.year == car2.year) {
		return true;
	}
	else {
		return false;
	}
}

int main() {
	int wiek;
	Car samochod1("Fiat", "500", 2017);
	Car samochod2("Fiat", "500", 2017);
	Car samochod3("BMW", "X5", 2022);
	samochod1.displayInfo();
	wiek = samochod1.getCarAge();
	cout << wiek << endl;
	cout << (isSameCar(samochod1, samochod2) ? "Takie same" : "Rozne") << endl;
	cout << (isSameCar(samochod1, samochod3) ? "Takie same" : "Rozne") << endl;
	return 0;
}