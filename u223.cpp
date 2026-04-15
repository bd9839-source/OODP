#include <iostream>
using namespace std;

class Product {
public:
    float calculateCost(float price, int quantity) {
        return price * quantity;
    }
    float calculateCost(float price, int quantity, float delivery) {
        return (price * quantity) + delivery;
    }
};

int main() {
    Product p;

    cout << "Cost without delivery: " << p.calculateCost(100, 2) << endl;
    cout << "Cost with delivery: " << p.calculateCost(100, 2, 50) << endl;

    return 0;
}