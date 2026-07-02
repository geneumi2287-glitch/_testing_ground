//using std::sample, std::shuffle, std::random_device, std::mt19937
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

    std::shuffle(number_pool.begin(), number_pool.end(), generator);
    std::vector<int> numbers(number_pool.begin(), number_pool.begin() + 6); //here, vector made with different constructors
    
    std::vector<int> guess;
    guess.reserve(6);

    while(guess.size() < 6){
        
        int input;
        std::cout << "pick a number between 1 and 45...: ";
        if(!(std::cin >> input)){
            std::cin.clear();
            std::cin.ignore(1000, '\n');
            std::cout << "only enter an integer...: " << '\n';
            continue;
        }else if(input < 1 || input > 45){
            std::cout << "number should be between 1 and 45...:" << '\n';
            continue;
        }

        if((std::find(guess.begin(),guess.end(), input)) != )

    }

    return 0;
}
