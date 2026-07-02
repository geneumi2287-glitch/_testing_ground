#include <iostream>

typedef std::string text_t;
using text2_t = std::string;

namespace hello{
    text2_t text1 = "xxx456x";
    text2_t text2 = "yyy555";

}

int main(){
    
    text_t text1 = "x";
    text2_t text2 = "y";

    std::cout << text1 << '\n';
    std::cout << text2 << '\n';
    std::cout << "compare:   \n"; 
    std::cout << hello::text1 << "  vs  " << text1 << '\n';
    std::cout << hello::text2 << "  vs  " << text2 << '\n';

    return 0;
}