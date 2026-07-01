
#include <iostream>

int main(){

    for(int i = 10; i > 0; i--){
        for(int j = 1; j < i; j++){
            std::cout << "* ";
        }
        //std::cout << std::endl;           //std::endl 과 \n은 같은 것이 아님. std::endl은 출력 버퍼를 비움.
        std::cout << '\n';
    }
        
    return 0;
}