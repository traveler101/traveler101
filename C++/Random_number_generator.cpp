#include <iostream>
#include <ctime>

// pseudo-random = NOT truely random (but close)

int main(){
    
    srand(time(NULL));

    int num1 = (rand() % 6) + 1; // give a random number from 1-6 
    int num2 = (rand() % 6) + 1;
    int num3 = (rand() % 6) + 1;

    std::cout << num1 <<'\t';
    std::cout << num2 <<'\t';
    std::cout << num3 <<'\n';
    
    return 0;
}