#include <iostream>
#include <vector>

/*
    typedef == reserved keyword used to create an additional name 
    (alias) for another data type.
    New identifier or for an existing type 
    Helps with readability and reduces typo
*/

// sample: typedef std::vector<std::pair<std::string,int>> pairlist_t;
// pairlist_t pairlist; define the specific type in main

//typedef std::string text_t;
//typedef int number_t;
//type def can be replaced by 'using'

using text_t = std::string;
using number_t = int;

int main(){
    text_t firstName = "Chan";
    number_t Age = 20;
    std::cout << "Hi, my name is "<< firstName <<". I am "<< Age <<" years old." ;
    return 0;
}