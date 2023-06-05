#include <iostream>

// Local variables = declared inside a function or a block{}
// Global variable = decalred outside of all functions 
// will use local variable then global if no further declaration

int myNUM = 3;

void printNUM();

int main(){

    int myNUM = 1;
    std::cout << myNUM << '\n'; // print local variable in main 
    printNUM(); // print local variable of the funciton 
    std::cout << ::myNUM << '\n'; // print global variable
    return 0;
}

void printNUM(){
    int myNUM = 2;
    std::cout << myNUM << '\n';
}