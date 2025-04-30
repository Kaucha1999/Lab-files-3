#include <iostream>
#include <string>
using namespace std;

class Vehicle {
protected:
    string brand;
    int year;

public:
    Vehicle(string b, int y) {
        brand = b;
        year = y;
    }

    virtual void showInfo() {
        cout << "Brand: " << brand << endl;
        cout << "Year: " << year << endl;
    }

    virtual void startEngine() {
        cout << "Starting engine of Vehicle" << endl;
    }

    virtual ~Vehicle() {}
};

class Car : public Vehicle {
private:
    int numDoors;

public:
    Car(string b, int y, int doors) : Vehicle(b, y) {
        numDoors = doors;
    }

    void showInfo() override {
        cout << "Brand: " << brand << endl;
        cout << "Year: " << year << endl;
        cout << "Number of doors: " << numDoors << endl;
    }

    void startEngine() override {
        cout << "Car engine is starting!" << endl;
    }

protected:
    int getNumDoors() {
        return numDoors;
    }
};

class ElectricCar : public Car {
private:
    int batteryCapacity;

public:
    ElectricCar() : Car("Nissan", 2022, 4) {
        batteryCapacity = 40;
    }

    ElectricCar(string b, int y, int doors, int battery) : Car(b, y, doors) {
        batteryCapacity = battery;
    }

    void showInfo() override {
        cout << "Brand: " << brand << endl;
        cout << "Year: " << year << endl;
        cout << "Number of doors: " << getNumDoors() << endl;
        cout << "Battery Capacity: " << batteryCapacity << " kWh" << endl;
    }

    void startEngine() override {
        cout << "Electric engine is starting... Silent but powerful!" << endl;
    }
};

int main() {
    Vehicle* v1 = new Vehicle("Generic", 2015);
    v1->showInfo();
    v1->startEngine();
    cout << "------------------" << endl;

    Vehicle* c1 = new Car("Toyota", 2021, 4);
    c1->showInfo();
    c1->startEngine();
    cout << "------------------" << endl;

    Vehicle* e1 = new ElectricCar("Tesla", 2023, 4, 75);
    e1->showInfo();
    e1->startEngine();
    cout << "------------------" << endl;

    Vehicle* e2 = new ElectricCar();
    e2->showInfo();
    e2->startEngine();
    cout << "------------------" << endl;

    delete v1;
    delete c1;
    delete e1;
    delete e2;

    return 0;
}
