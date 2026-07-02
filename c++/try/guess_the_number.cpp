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

    for(int i = 1; i <= 6; i++){
        
        int input;
        std::cout << "pick a number between 1 and 45... " << '\n';
        

        if(!(std::cin >> input)){
            std::cout << "enter ONLY an integer" << '\n';
            std::cin.clear();
            std::cin.ignore(1000, '\n');
            i = i - 1;
            continue;
            
        }else if((input > 45) || (input < 1)){
            i = i - 1;
            std::cout << "enter an integer between 1 and 45... " << '\n';
            continue;
        }
        
        guessed[i-1] = input;

        //using while loop??
        for(int j = 0; j < i-1; j++){
            if(guessed[j] == guessed[i-1]){
                i = i - 1;
                std::cout << "pick a number that you did not choose before... " << '\n';
                break;
            }
        }

    }
    
    std::cout << "--------> your number is --------> " << '\n';
    
    bool correct = false;
    bool correct2 = false;
    for(int i = 0; i < 6; i++){

        std::cout << guessed[i];
        for(int j = 0; j < 6; j++){
            if(guessed[i] == numbers[j]){
                correct = true;
            }
        }
        if(correct){
            std::cout << "( O )" << '\n';
            correct = false;
        }else{
            std::cout << '\n';
        }
        
    }

    std::cout << "--------> winning number is --------> " << '\n';

    for(int i = 0; i < 6; i++){
        
        std::cout << numbers[i];
        for(int j = 0; j < 6; j++){
            if(guessed[j] == numbers[i]){
                correct2 = true;
            }
        }
        if(correct2){
            std::cout << "( O )" << '\n';
            correct2 = false;
        }else{
            std::cout << '\n';
        }
    }

    return 0;
}