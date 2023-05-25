#include <iostream>

/*
    Type Conversion =   conversion a value of one data type to another 
                        Implicit = automic
                        Explicit = Precede value with new data type (int)
*/

int main(){

    //double x = (int) 3.14;
    //char y = 100;

    //std::cout << x << '\n';
    //std::cout << y << '\n'; // output 'd' since ascii 100 = d
    //std::cout << (char) 100; // shortcut to output d

    int correct = 8;
    int question = 10;
    double score = correct/(double) question*100;

    std::cout << score << '\n';
    return 0;
}