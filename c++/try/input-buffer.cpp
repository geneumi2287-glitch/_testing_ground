#include <iostream>
#include <string>
int main(){

    std::string name;
    std::string sentence;

    std::cout << "what is your name? ... ";
    std::cin >> name;
    std::cout << "what is your full name? ...";
    
    std::cin.ignore(1000, '\n');                            //name에 공백을 포함한 문장이 들어가면 -> 첫 공백전까지만 읽음 -> 그 이후로 입력된 것을 바로 getline이 받음.
    //std::getline(std::cin, name);
    std::getline(std::cin >> std::ws, name);                //getline()은 공백까지 포함해서 받아들임
    std::cout << "Your full name is " << name;

    // cin 의 경우 new line 은 받아들이지 않기 때문에 다음에 
    // getline 할때 입력 버퍼에 남아있던 new line character 가 
    // 바로 입력 받은 것으로 인식
    // getline(std::cin >> std::ws, name) -> ignore new line, white spaces 
    return 0;
}