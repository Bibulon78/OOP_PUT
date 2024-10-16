package test;

public class Car {
	
	String make;
	String model;
	int year;
	
	int currentYear = 2024;

	public Car(String make, String model, int year) {
		this.make = make;
		this.model = model;
		this.year = year;
	}
	
	void displayInfo() {
		System.out.println(make + " " + model + " " + year);
	}
	
	int getCarAge() {
		return currentYear - year; 
	}
	
    boolean isSameCar(Car otherCar) {
        return this.make.equals(otherCar.make) && 
               this.model.equals(otherCar.model) && 
               this.year == otherCar.year;
    }
	
	public static void main(String[] args) {
		int wiek;
		
		Car samochod1 = new Car("Fiat", "500", 2017);
		Car samochod2 = new Car("Fiat", "500", 2017);
		
		samochod1.displayInfo();
		samochod2.displayInfo();
		
		wiek = samochod1.getCarAge();
		System.out.println(wiek);
		
		boolean wynik = samochod1.isSameCar(samochod2);
        System.out.println("Czy auta sa takie same: " + wynik);
	}

}