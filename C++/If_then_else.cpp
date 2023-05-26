#include <iostream>

// if statement, do something if a condition is true

int main(){

    int age;

    std::cout << "What is your age? ";
    std::cin >> age;

    if(age >= 18){
        std::cout << "Welcome!\n";
    }
    else if(age < 0){
        std::cout << "You have not been born yet!\n";

    }
    else{
        std::cout << "You are not old enough!\n";
    }

    return 0;
}