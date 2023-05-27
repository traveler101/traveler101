#include <iostream>

/*
    break = break out of a loop
    continue = skip the current iteration 
*/

int main(){

    for(int i = 0; i <= 20; i++){
        if (i%2){
            std::cout << i <<'\t';
        }
        else{
            continue;
        }
    }
    
    return 0;
}