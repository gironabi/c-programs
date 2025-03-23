#include <iostream>
using namespace std;

class Rectangle {
private:
    double width;
    double height;

public:
    Rectangle() {
        width = 1.0;
        height = 1.0;
    }

    Rectangle(double w, double h) {
        width = w;
        height = h;
    }

    double getWidth() const {
        return width;
    }

    void setWidth(double w) {
        width = w;
    }

    double getHeight() const {
        return height;
    }

    void setHeight(double h) {
        height = h;
    }

    double getArea() const {
        return width * height;
    }

    double getPerimeter() const {
        return 2 * (width + height);
    }
};

int main() {
    Rectangle rect1(4.0, 40.0);
    Rectangle rect2(3.5, 35.9);

    cout << "Rectangle 1:" << endl;
    cout << "Width: " << rect1.getWidth() << endl;
    cout << "Height: " << rect1.getHeight() << endl;
    cout << "Area: " << rect1.getArea() << endl;
    cout << "Perimeter: " << rect1.getPerimeter() << endl;

    cout << "\nRectangle 2:" << endl;
    cout << "Width: " << rect2.getWidth() << endl;
    cout << "Height: " << rect2.getHeight() << endl;
    cout << "Area: " << rect2.getArea() << endl;
    cout << "Perimeter: " << rect2.getPerimeter() << endl;

    return 0;
}
