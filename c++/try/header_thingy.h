
#pragma once
// so it can be included only once during a single compilation

#include <iostream>
#include <cmath>
int int_square(int x){
    
    if(x < 0){
        x = abs(x);
    }    
    int sum = 0;
    int y = x;

    while(x > 0){
        if(x & 1){
            sum = sum + y;
        } 
        x >>= 1;
        y <<= 1;
    }

    return sum;
}