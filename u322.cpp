#include <iostream>
using namespace std;

class Vehicle {
protected:
    string brand;

public:
    void getVehicle() {
        cout << "Enter Brand: ";
        cin >> brand;
    }
};

class Car : public Vehicle {
protected:
    int speed;

public:
    void getCar() {
        getVehicle();
        cout << "Enter Speed: ";
        cin >> speed;
    }
};

class ElectricCar : public Car {
    int batteryRange;

public:
    void getElectricCar() {
        getCar();
        cout << "Enter Battery Range: ";
        cin >> batteryRange;
    }

    void display() {
        cout << "Brand: " << brand << endl;
        cout << "Speed: " << speed << endl;
        cout << "Battery Range: " << batteryRange << endl;
    }
};

int main() {
    ElectricCar e;
    e.getElectricCar();
    e.display();
    return 0;
}