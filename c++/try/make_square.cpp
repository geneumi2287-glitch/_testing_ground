

// make a square() function without using multiplication operato

// suppose a > 0 
// a x 13 = ?
// a x 13 = a x (8 + 4 + 1)
// a x 1 (yes)
// a x 2 (no) = (a x 1) + (a x 1) = (a x 1) << 1
// a x 4 (yes) = (a x 2) + (a x 2) = (a x 2) << 1
// a x 8 (yes) = (a x 4) + (a x 4) = (a x 4) << 1
// a x 16 (no) = ....
// ...


// #include <iostream> // std:abs might not be in here, 
#include <iostream>
#include <cmath> // or <cstdlib>
int square(int x){
    
    if(x < 0){
        x = abs(x);
    }    
    int sum = 0;
    int y = x;

    // while(x > 0){
    //     if(x & 1){
    //         sum = sum + y;
    //         x >>= 1;         // x >> 1 -> does not change x.
    //         y <<= 1;
    //     } else {
    //         x >>= 1;         // same code repeated
    //         y <<= 1;         // same code repeated
    //     }
    // }

    while(x > 0){
        if(x & 1){
            sum = sum + y;
        } 
        x >>= 1;
        y <<= 1;
    }

    return sum;
}

int main() {

    int x;
    std::cout << "Give me an integer value. ";
    std::cin >> x;
    int result = square(x);
    std::cout << "the square of given integer " << x << " is " << result;
    return 0;
}
