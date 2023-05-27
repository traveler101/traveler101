#include <iostream>

/*
    Do while loop = do some block of code first
    THEN repeat again if condition is TRUE
*/

int main(){

    int number;

    do{
        std::cout << "Enter a positive #: ";
        std::cin >> number;
    }while (number < 0);

    if (number == 0 ){
        std::cout << number << " is neither positve nor negative.\n";
    }
    else{
        std::cout << number << " is positve.\n";
    }
    return 0;
}