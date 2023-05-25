#include <iostream>

// arithmetic operator = return the result of a specific arithmetic operator ( + - * / )

int main(){

    int student = 20;
    //student = student + 1;
    //student += 1;
    student++;

    // student = student - 1;
    // student -= 1;
    student--;

    // student = student * 2;
    student *= 2;

    // student = student / 2;
    student /= 2;

    int remainder = student % 3;

    std::cout << remainder;

    return 0;
}