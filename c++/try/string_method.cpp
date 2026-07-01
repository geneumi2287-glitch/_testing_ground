#include <iostream>
#include <vector>

int main(){
    
    std::string text;
    std::string another_text;
    
    std::cout << "enter any text:  ";
    std::getline(std::cin, text);
    
    std::cout << (text.empty() ? "entered an empty text\n" : "text is not empty\n");    //.empty(): check if empty
    std::string text_2 = text;
    text.clear();
    std::cout << text_2.append("@xmail.com\n");                                         //.append(): append string
    std::cout << text_2.at(0) << "  " << text_2.at(1) << "  " << text_2.at(2) << "  " << text_2.at(3) << std::endl;
    
    std::cout << "enter another text that contains spaces: ";
    std::getline(std::cin, another_text);
    int length = another_text.length();                 //.length(): return the length of string
    std::cout << another_text.insert(length / 2, "???") << '\n';
    
    std::size_t space = another_text.find(' ');                 //.find("query"): find the index of first occurance
    if(space != std::string::npos) another_text.erase(space, 1);
    std::cout << another_text << std::endl;
    
}