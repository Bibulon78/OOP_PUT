package test;

public class Car {
	
	String make;
	String model;
	int year;
	
	int currentYear = 2024;

	public Car(String a, String b, int c) {
		make = a;
		model = b;
		year = c;
	}
	
	void displayInfo() {
		System.out.println(make + " " + model + " " + year);
	}
	
	int getCarAge() {
		return currentYear - year; 
	}
	
	public static void main(String[] args) {
		int wiek;
		Car samochod1 = new Car("Fiat", "500", 2017);
		samochod1.displayInfo();
		wiek = samochod1.getCarAge();
		System.out.println(wiek);
	}

}