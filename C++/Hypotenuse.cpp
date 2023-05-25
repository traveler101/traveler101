#include <iostream>
#include <cmath>

int main(){
    double a;
    double b;
    double c;

    std::cout << "Input 1st side: " << '\n';
    std::cin >> a;
    std::cout << "Input 2nd side: " << '\n';
    std::cin >> b;

    c = sqrt(pow(a,2) + pow(b,2));
    std::cout << "HYPOTENUSE: " << c << '\n';
    return 0;
}