#include <iostream>

void happybirthday(std::string Birthday_name, int birth_age); //define function first but write it after the main program

int main(){

    std::string name = "Allen";
    int age = 20;
    happybirthday(name, age);
    return 0;
}

void happybirthday(std::string Birthday_name, int birth_age){
    std::cout << "Happy Birthday to "<< Birthday_name << '\n';
    std::cout << "Happy Birthday to "<< Birthday_name << '\n';
    std::cout << "Happy Birthday to dear "<< Birthday_name << '\n';
    std::cout << "Happy Birthday to "<< Birthday_name << '\n';
    std::cout << "Congrats! You are " << birth_age << " years old\n";
}