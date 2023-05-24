#include <iostream>

int main() {
    // int(whole number/ integer)
    int a; //declaration
    a = 5; //assignment

    /* OR we can do this */
    int x = 5;
    int y = 6;
    int sum = x + y;

    /*std::cout<< x<<'\n';
    std::cout<< y<<'\n';
    std::cout<< sum<<'\n';*/

    // double(real number)
    double gpa = 4.3;
    //std::cout<< gpa<<'\n';

    // char(single charater)
    char grade = 'A';
    char initial = 'BC'; //overflow and will display last charater only 
    char dollarsign = '$';
    //std::cout<< dollarsign<< '\n';

    // bool(true or false)
    bool student = true;
    bool fail = false;

    // string (objects that represent a sequence of text)
    std::string name = "Allen";
    
    
    std::cout << "Hello, I am " << name << '\n';
    std::cout << "My gpa is "<< gpa << " this semester"<<'\n';


    return 0;
}
