#include <iostream>
#include <cmath>
using namespace std;

// Abstract class Shape
class Shape {
public:
    // Pure virtual functions for area and perimeter
    virtual double area() = 0;
    virtual double perimeter() = 0;
};

// Derived class Circle
class Circle : public Shape {
private:
    double radius;

public:
    // Constructor to initialize radius
    Circle(double r) : radius(r) {}

    // Implementing the area() method
    double area() override {
        return M_PI * radius * radius;
    }

    // Implementing the perimeter() method
    double perimeter() override {
        return 2 * M_PI * radius;
    }
};

// Derived class Rectangle
class Rectangle : public Shape {
private:
    double width, height;

public:
    // Constructor to initialize width and height
    Rectangle(double w, double h) : width(w), height(h) {}

    // Implementing the area() method
    double area() override {
        return width * height;
    }

    // Implementing the perimeter() method
    double perimeter() override {
        return 2 * (width + height);
    }
};

int main() {
    // Creating objects of Circle and Rectangle
    Shape* circle = new Circle(5.0);       // Circle with radius 5.0
    Shape* rectangle = new Rectangle(4.0, 6.0); // Rectangle with width 4.0 and height 6.0

    // Printing the area and perimeter of Circle
    cout << "Circle Area: " << circle->area() << endl;
    cout << "Circle Perimeter: " << circle->perimeter() << endl;

    // Printing the area and perimeter of Rectangle
    cout << "Rectangle Area: " << rectangle->area() << endl;
    cout << "Rectangle Perimeter: " << rectangle->perimeter() << endl;

    // Clean up
    delete circle;
    delete rectangle;

    return 0;
}
