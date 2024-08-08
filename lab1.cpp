#include <iostream>

const float PI = 3.14159;

int main() {
    std::cout << "Enter the radius of the circle: ";
    double radius;
    std::cin >> radius;
    std::cout << radius << std::endl;

    double area = PI * radius * radius;
    std::cout << "The area of the circle is: " << area << std::endl;

    return 0;
}