#include <iostream>
using namespace std;

class Product {
public:
    Product() {
        cout << "Product created" << endl;
    }

    ~Product() {
        cout << "Product object destroyed" << endl;
    }
};

int main() {
    Product p;

    return 0;
}