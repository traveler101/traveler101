#include <iostream>

/*
    loop(){
        loop(){

        }
    }
*/

int main(){
    
    int rows;
    int cols;
    char symbol;

    std::cout << "-----------Rectangle Printer-----------\n";
    std::cout << "Enter length: ";
    std::cin >> cols;
    std::cout << "Enter width: ";
    std::cin >> rows;
    std::cout << "Enter a symbol: ";
    std::cin >> symbol;

    for (int i = 1; i <= rows; i++){
        for (int j = 1; j <= cols; j++){
            std::cout << symbol;
        }
        std::cout << '\n';
    }


    std::cout << "---------------------------------------\n";
    return 0;
}