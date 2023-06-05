#include <iostream>

void bakePizza();
void bakePizza(std::string topping1);
void bakePizza(std::string topping1, std::string topping2); //function signature = function name + parameter

int main(){
    bakePizza();
    bakePizza("pepperoni");
    bakePizza("pepperoni", "cheese");
    return 0;
}

void bakePizza(){
    std::cout << "Here is your pizza!\n";
}

void bakePizza(std::string topping1){
    std::cout << "Here is your " << topping1 << " pizza!\n";
}

void bakePizza(std::string topping1, std::string topping2){
    std::cout << "Here is your " << topping1 << " and " << topping2 << " pizza!\n";
}