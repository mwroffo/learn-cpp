#include<iostream>
using namespace std;

/* Demonstrate OOP::encapsulation. 
Implement a Triangle and an abstract shape class to enable polymorphism. */

class Circle {
    public:
        double compute_area(double r) {
            this->radius = r;
            return 3.14 * radius * radius;
        }
    private:
        double radius;
};

int main() {
    Circle obj;

    // obj.radius = 5.5; // error

    cout << "Radius: " << obj.compute_area(5.5) << endl;

    return 0;
}