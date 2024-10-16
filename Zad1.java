package test;
public class Car {
	
	String make;
	String model;
	int year;

	public Car(String a, String b, int c) {
		make = a;
		model = b;
		year = c;
	}
	
	void displayInfo() {
		System.out.println(make + " " + model + " " + year);
	}
	
	public static void main(String[] args) {
		Car samochod1 = new Car("Fiat", "500", 2017);
		samochod1.displayInfo();
	}
}
