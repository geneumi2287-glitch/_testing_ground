#include <iostream>
#include <ctime>
#include <vector>


int main(){

    std::vector<int> numbers(6);
    std::vector<int> guessed(6);


    srand(time(nullptr));

    for(int i = 1; i <= 6; i++){
        numbers[i-1] = rand() % 45 + 1;
        for(int j = 0; j < i-1; j++){
            if(numbers[j] == numbers[i-1]){
                i = i - 1;
                break;
            }
        }
    }

    for(int i = 0; i < 6; i++){

        std::cout << numbers[i] << '\n';
        
    }

    return 0;
}