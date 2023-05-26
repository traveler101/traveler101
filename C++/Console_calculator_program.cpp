#include <iostream>

int main(){

    char op;
    double num1, num2, result;

    std::cout << "********CALCULATOR********\n";

    std::cout << "Enter either (+ - * /): ";
    std::cin >> op;
    std::cout << "Enter the 1st number: ";
    std::cin >> num1;
    std::cout << "Enter the 2st number: ";
    std::cin >> num2;

    switch(op){
        case '+':
            result = num1 + num2;
            std::cout << "Result: " << result <<'\n';
            break;
        case '-':
            result = num1 - num2;
            std::cout << "Result: " << result <<'\n';
            break;
        case '*':
            result = num1 * num2;
            std::cout << "Result: " << result <<'\n';
            break;
        case '/':
            result = num1 / num2;
            std::cout << "Result: " << result <<'\n';
            break;
        default:
            std::cout << "Please enter either (+ - * /)!" << '\n';
            break;
    }

    std::cout << "**************************\n";
    return 0;
}