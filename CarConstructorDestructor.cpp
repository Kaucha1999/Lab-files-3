#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string brand;
    int year;

public:
    // Constructor
    Car(string b, int y) {
        brand = b;
        year = y;
        cout << "Car " << brand << " from " << year << " created." << endl;
    }

    // Destructor
    ~Car() {
        cout << "Car " << brand << " destroyed." << endl;
    }

    // Show car info
    void showInfo() {
        cout << "Brand: " << brand << ", Year: " << year << endl;
    }
};
int main() {
    Car* car1 = new Car("Toyota", 2020);     // Creating car object on the heap

    car1->showInfo();      // Displaying car info

    delete car1;  // Deleting object (calls destructor)

    return 0;
}
