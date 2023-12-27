// 7.Fill in the missing parts of the code to implement dynamic polymorphism using a base class Shape and
// derived classes Circle and Rectangle. Each derived class should override the virtual draw method to print
// specific information about the shape

#include <iostream>
#include <string>

using namespace std;

class Shape {
public:
    virtual void draw() = 0; // Declare a pure virtual function 'draw'
    virtual ~Shape() {} // Adding a virtual destructor for polymorphic behavior
};

class Circle : public Shape {
    double radius;

public:
    Circle(double rad) : radius(rad) {}

    void draw() override {
        cout << "Drawing Circle with radius: " << radius << endl;
    }
};

class Rectangle : public Shape {
    double length, width;

public:
    Rectangle(double len, double wid) : length(len), width(wid) {}

    void draw() override {
        cout << "Drawing Rectangle with length and width: " << length << " and " << width << endl;
    }
};

void renderShape(Shape *shape) {
    shape->draw();
}

int main() {
    Circle circle(5.0);
    Rectangle rectangle(4.0, 3.0);

    renderShape(&circle);
    renderShape(&rectangle);

    return 0;
}
