// 4. What is the output of the following code?
#include <iostream>

using namespace std;

class Circle {
public:
    double radius;

    double calculateArea() {
        return 3.14 * radius * radius;
    }
};

int main() {
    Circle circle1;
    circle1.radius = 10.0;
    cout << "Area of Circle1: " << circle1.calculateArea() << endl;
    Circle circle2;
    circle2.radius = 5.0;
    cout << "Area of Circle2: " << circle2.calculateArea() << endl;
    return 0;
}

// Answer is: Area of Circle1: 314
//            Area of Circle2: 78.5