#include <iostream>

// cout << (insertion operator)
// cin >> (extraction operator) 

int main(){
    std::string name, full_name;

    std::cout << "What is your name?"<<'\n';
    std::cin >> name; //limitation cannot accept input with space 
    std::cout << "Hello, " << name <<'\n';
    // use getline instead
    std::cout << "What is your full name?"<<'\n';
    std::getline(std::cin >> std::ws , full_name); 
    /*
        becasue cin accept input before get line 
        there will be a \n follow 
        So use std::ws accept input without whitespace
    */
    std::cout << "Hello, " << full_name;
    return 0;
}