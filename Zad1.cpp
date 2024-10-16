#include <iostream>
using namespace std;

class Car {
public:
	string make;
	string model;
	int year;

	Car(string make, string model, int year) {
		this->make = make;
		this->model = model;
		this->year = year;
	}

	void displayInfo() {
		cout << make << " " << model << " " << year << endl;
	}
	
	~Car(){}
};

int main() {
	Car samochod1("Fiat", "500", 2017);
	samochod1.displayInfo();

	return 0;
}