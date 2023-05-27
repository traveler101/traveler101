#include <iostream>

int main(){

    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name) ;

    if (name.length() > 12){ //get the length of the string 
        std::cout << "Your name can't be over 12 charaters!\n";
    }
    else if(name.empty()){ // >>return boolean, T for empty, F for not 
        std::cout << "Your name can't be empty!\n";
    }
    else {
        std::cout << "Hi, "<< name << ".\n";
    }

    name.append("@gmail.com"); //add string after the string 
    std::cout << "Your email is " << name << ".\n";

    std::cout << name.erase(0,5) <<'\n';

    std::cout << name.at(0)<<'\n'; // input string index, output charater, 0 for the 1st charater

    name.insert(0,"A"); // insert the 'A' at position index 0
    std::cout << name << '\n';

    std::cout << name.find(' ') << '\n'; // return the 1st index postion of the variable

    name.clear(); //clear the value in the string variable
    std::cout << "Hi, "<< name << ".\n";

    return 0;
}