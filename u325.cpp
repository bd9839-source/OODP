#include <iostream>
using namespace std;

class ChargingSystem {
public:
    virtual void charge() = 0;
};

class FastCharging : public ChargingSystem {
public:
    void charge() {
        cout << "Fast Charging Activated" << endl;
    }
};

class NormalCharging : public ChargingSystem {
public:
    void charge() {
        cout << "Normal Charging Activated" << endl;
    }
};

int main() {
    FastCharging f;
    NormalCharging n;

    f.charge();
    n.charge();

    return 0;
}