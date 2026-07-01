#include <iostream>

int sum(int n){
        return n * (n + 1) / 2 ;
    }

int main(){
    
    int sum1 = 0;
    

    for(int i = 1; i <= 50; i++){
        
        if(i&1){
            continue;
        }
        sum1 = sum1 + i;
    }
    int sum2 = sum(50);
    std::cout << sum2 << std::endl;
    std::cout << sum1;

    return 0;
}