#include <iostream>

// && = check if two conditions are true 
// || = check if least one of two conditions is true 
// !  = reverses the logical state of its operand

int main(){

    int temp;
    bool sunny = false;

    std:: cout << "What is the temperature? ";
    std:: cin >> temp;

    if (temp > 0 && temp < 30){
        std:: cout << "The temperature is good\n";
    }
    else{
        std:: cout << "The temperature is bad\n";
    }

///////////////////////////////////////////////////////////////////////////////

    if (temp <= 0 || temp >= 30){
        std:: cout << "The temperature is bad\n";
    }
    else{
        std:: cout << "The temperature is good\n";
    }

    if (!sunny){
        std:: cout << "Cloudy\n";
    }
    else{
        std:: cout << "Sunny\n";
    }

    return 0;
}