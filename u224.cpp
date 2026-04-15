#include <iostream>
using namespace std;

class Product {
    float price;

public:
    Product(float p) {
        price = p;
    }

    // Overload + operator
    Product operator+(Product p) {
        return Product(price + p.price);
    }

    void display() {
        cout << "Total Price: " << price << endl;
    }
};

int main() {
    Product p1(1000), p2(500);

    Product p3 = p1 + p2;

    p3.display();

    return 0;
}