#include "header_thingy.h"
#include <sstream>
class only_integer {

    public:
        int value;
        // void check_input(){
        //     int input;
        //     std::cout << "enter an integer for side value: ";
            
        //     while(!(std::cin >> input)){                             //std::cin >> input returns istream object
        //         std::cin.clear();
        //         // std::cin.ignore(1000);                            //1000개를 ignore할때까지 기다림....
        //         std::cin.ignore(1000, '\n');
        //         std::cout << "only enter an integer value... ";
        //         //std::cin >> input -> 오류 발생, 멈춤. 타입이 다른 값을 다시 입력하면 fail state가 생겨서 input을 체크하지도 않는다.
        //     }
        //     value = input;
        // }
        void check_input(){
            std::string s;
            while(true){
                
                std::cout << "enter an integer for side value: ";
                std::getline(std::cin >> std::ws, s);
                std::stringstream ss(s);                                //library <sstream> is needed
                if((ss >> value) && ss.eof()){                          //ss >> value returns sstream object
                    break;
                }

            }
        }
};

int main(){
    
    only_integer a;
    only_integer b;
    double c;

    a.check_input();
    b.check_input();
    
    c = sqrt(int_square(a.value) + int_square(b.value));
    std::cout << "side A and side B with right angle make a triangle with C = " << c;

    return 0;
}