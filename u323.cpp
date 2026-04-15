#include <iostream>
using namespace std;

class Engine {
public:
    void engineStart() {
        cout << "Engine Started" << endl;
    }
};

class GPS {
public:
    void showLocation() {
        cout << "GPS Location Displayed" << endl;
    }
};

class SmartCar : public Engine, public GPS {
public:
    void smartFeatures() {
        engineStart();
        showLocation();
        cout << "Smart Car Ready" << endl;
    }
};

int main() {
    SmartCar s;
    s.smartFeatures();
    return 0;
}