#include <iostream>

/*
    const: specific a constant
    tells complier to prevent any modifying
    read-only variable
*/

int main(){
    const double PI = 3.14159265;
    double radius = 2;
    double circumference = 2 * PI * radius;

    std::cout << circumference << "cm";
    return 0;
}