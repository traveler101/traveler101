#include <iostream>

// return = return a value back to the spot where you call the emcompassing function

double sqaure(double length);
std::string concatstring(std::string s_1, std::string s_2);
int main(){
    double length = 4.0;  
    std::cout << sqaure(length);

    std::string name_1 = "Chan";
    std::string name_2 = "Allen";
    std::string full_name = concatstring(name_1, name_2);

    std::cout << "Hi "<< full_name <<'\n';
    return 0;
}

double sqaure(double length){
    double area = length * length;
    return area;
}
std::string concatstring(std::string s_1, std::string s_2){
    return s_1+" "+s_2;
}