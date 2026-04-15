#include <iostream>
using namespace std;

class Product {
    string name;
    float price;

public:
    // Default constructor
    Product() {
        name = "Unknown";
        price = 0;
    }

    // Parameterized constructor
    Product(string n, float p) {
        name = n;
        price = p;
    }

    void display() {
        cout << "Product: " << name << ", Price: " << price << endl;
    }
};

int main() {
    Product p1;
    Product p2("Shoes", 1999);

    p1.display();
    p2.display();

    return 0;
}