#include <iostream>

int main(){

    std::string name;

    while(name.empty()){
        std::cout << "What is your name: ";
        std::getline(std::cin, name);
    }
    std::cout << "Hi, " << name << '\n';

    return 0;
}