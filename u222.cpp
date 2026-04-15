#include <iostream>
using namespace std;

class Product {
    float price;

public:
    Product(float p) {
        price = p;
    }

    // Copy constructor
    Product(Product &p) {
        price = p.price;
    }

    void display() {
        cout << "Price: " << price << endl;
    }
};

int main() {
    Product p1(500);
    Product p2 = p1;  // Copy constructor called

    p1.display();
    p2.display();

    return 0;
}