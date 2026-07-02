//using std::sample, std::shuffle, std::random_device, std::19937
#include <iostream>
#include <random>
#include <algorithm>
#include <vector>

int main(){
    
    std::random_device rd;          
    std::mt19937 generator(rd());   //random_device is a class, but function operator makes it possible to rd();
    std::vector<int> number_pool(6);
    for(int i = 0; i < 45; i++){
        number_pool[i] = i + 1;
    }
    std::shuffle(number_pool.begin(),number_pool.end(), generator);
    std::vector<int> numbers(6);
    return 0;
}
