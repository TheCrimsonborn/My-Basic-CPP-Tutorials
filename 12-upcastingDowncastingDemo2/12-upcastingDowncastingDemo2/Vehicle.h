#include <iostream>
using namespace std;

class Vehicle {
private:
	int speed;
	int gearNumber;
	bool isStart;
	double price;
	string brand;
public:
	Vehicle(double vehicle_price = 0.0, string vehicle_brand = "") {
		isStart = false;
		gearNumber = 0;
		speed = 0;
		price = vehicle_price;
		brand = vehicle_brand;
		cout << "Vehicle constructor worked." << endl;
	}
	bool getIsStart()const { return isStart; };
	int getGearNumber()const { return gearNumber; };
	int getSpeed()const { return speed; };
	double getPrice()const { return price; };
	string getBrand()const { return brand; };

	void setIsStart(bool is_start) { isStart = is_start; };
	void setGearNumber(int gear_number) { gearNumber = gear_number; };
	void setSpeed(int speed_) { speed = speed_; };
	void setPrice(double veh_price) { price = veh_price; };
	void setBrand(string veh_brand) { brand = veh_brand; };
	void startEngine() {
		isStart = true;
		gearNumber = 1;
	}
	void stopEngine() {
		speed=0;
		isStart = false;
		gearNumber = 0;
	}
	virtual void displayInfo() {
		cout << "Brand: " << brand << endl;
		cout << "Price: " << price << endl;
		cout << "Speed: " << speed << " and gear: " << gearNumber << endl;
		isStart ? cout << "Engine on" << endl : cout << "Engine off" << endl;
	}
	virtual void increaseSpeed() = 0;
	virtual void decreaseSpeed() = 0;
};

class Car :public Vehicle {
public:
	Car(double car_price, string car_brand) :Vehicle(car_price, car_brand) {
		cout << "Car constructor worked." << endl;
	}
	void increaseSpeed() {
		if (getIsStart()) {
			int speed_temp = getSpeed();
			if (speed_temp <= 120) {
				int gear_temp = getGearNumber();
				setSpeed(speed_temp + 30);
				if (gear_temp < 6) {
					setGearNumber(gear_temp + 1);
				}
			}
		}
		else {
			cout << "You should start the engine." << endl;
		}
	}
	
	void decreaseSpeed() {
		if (getIsStart()) {
			int speed_temp = getSpeed();
			if (speed_temp >= 30) {
				int gear_temp = getGearNumber();
				setSpeed(speed_temp - 30);
				if (gear_temp >= 2) {
					setGearNumber(gear_temp - 1);
				}
			}
		}
		else {
			cout << "You should start the engine." << endl;
		}
	}
	void displayInfo() {
		cout << "------------------------- Car Informations -------------------------" << endl;
		Vehicle::displayInfo();
	}
};

class Bike :public Vehicle {
public:
	Bike(double bike_price, string bike_brand) :Vehicle(bike_price, bike_brand) {
		cout << "Bike constructor worked." << endl;
	}
	void increaseSpeed() {
		if (getIsStart()) {
			int speed_temp = getSpeed();
			if (speed_temp <= 90) {
				int gear_temp = getGearNumber();
				setSpeed(speed_temp + 20);
				if (gear_temp < 6) {
					setGearNumber(gear_temp + 1);
				}
			}
		}
		else {
			cout << "You should start the engine." << endl;
		}
	}

	void decreaseSpeed() {
		if (getIsStart()) {
			int speed_temp = getSpeed();
			if (speed_temp >= 20) {
				int gear_temp = getGearNumber();
				setSpeed(speed_temp - 20);
				if (gear_temp >= 2) {
					setGearNumber(gear_temp - 1);
				}
			}
		}
		else {
			cout << "You should start the engine." << endl;
		}
	}
	void displayInfo() {
		cout << "------------------------- Bike Informations -------------------------" << endl;
		Vehicle::displayInfo();
	}
};