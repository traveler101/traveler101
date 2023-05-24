#include <iostream>

/*
    Namespace = provide a solution for preventing name conflicts
    in a lage projects. Each entity needs a unique name.
    A namespace allows for identically named entities
    as long as the namespace are different 
*/

namespace first{
    int x = 1;
}
namespace second{
    int x = 2;
}

int main(){

    using namespace second; // no need pre-fix in output
    
    using std::cout;
    /* using namespace std, we don't have to type std:: berfore any code */

    int x = 0 ;

    /* std::cout<< x << '\n';  print local variable x = 0 */

    cout << first::x; // higher priority than above so output = 1

    return 0;
}