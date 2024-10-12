#include <iostream> // iostream is a header file that contains functions for basic input output operations

int main(){
    int age = 23;
    std::string name = "Zahra";

    std::cout<<"Hello, "<<name<<'\n'; //std::cout means standard character output, << is left shift operator when used with numbers
    std::cout<<"How are you?"<<std::endl; // instead of <<std::endl use '\n'
    std::cout<<"You are "<<age<<" years old."<<'\n';
    return 0;
}