#include <iostream>
#include <ctime>

int main(){
    
    srand(time(0));
    int RANDnum = (rand() % 5) + 1;

    switch(RANDnum){
        case 1: std::cout << "SSR\n"; break;
        case 2: std::cout << "SR\n"; break;
        case 3: std::cout << "R\n"; break;
        case 4: std::cout << "UR\n"; break;
        case 5: std::cout << "C\n"; break;
    } 

    
    return 0;
}