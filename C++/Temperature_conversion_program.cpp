#include <iostream>

int main(){

    double temp;
    char unit;

    std::cout << "************* Temperture Conversion *************\n";

    std::cout << "F: Fahrenheit\n";
    std::cout << "C: Celsius\n";
    std::cout << "What unit would you like to convert from: ";
    std::cin >> unit;

    switch(unit){
        case 'F' : // think of lower case input 
            std::cout << "Input the temperature: ";
            std::cin >> temp;
            std::cout << "It equals to " << (temp-32)/1.8 << " degree Celsius.\n";
            break;
        case 'C' : // think of lower case input
            std::cout << "Input the temperature: ";
            std::cin >> temp;
            std::cout << "It equals to " << (temp*9/5)+32 << " degree Fahrenheit.\n";
            break;
        default:
            std::cout << "Please enter a proper unit (F/C).\n";
            break;
    }

    std::cout << "*************************************************\n";

    return 0;
}