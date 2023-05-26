#include <iostream>

// ternary operator ?: = replacement to an if/else statement 
// condition ? expression 1 : expression 2;

int main(){

    //int grade = 60;
    //grade >= 50 ? std::cout << "Pass!\n" : std::cout << "Fail!\n" ; 

    int num = -2;
    num % 2 ? std::cout << "ODD\n" : std::cout << "EVEN\n" ; // 1 = true and 0 = false

    bool hungry = false;
    //hungry ? std::cout << "hungry\n" : std::cout << "full\n" ;
    std::cout << (hungry? "hungry\n" : "full\n");

    return 0;
}