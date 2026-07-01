#include "header_thingy.h"

int main(){
    
    int a, b;
    double c;
    
    std::cout << "side A(integer): ";
    std::cin >> a;
    std::cout << "side B(integer): ";
    std::cin >> b;

    c = sqrt(int_square(a) + int_square(b));
    std::cout << "side A and side B with right angle make a triangle with C = " << c;

    return 0;
}