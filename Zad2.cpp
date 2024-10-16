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

int main() {
	int wiek;
	Car samochod1("Fiat", "500", 2017);
	samochod1.displayInfo();
	wiek = samochod1.getCarAge();
	cout << wiek << endl;
	return 0;
}