#include <iostream>
#include <vector>

int main(){
    // typedef std::vector<std::pair<std::string, int >> pairlist_t; // pairlist_t is the identifier for this datatype. Much more readable!
    typedef std::string text_t;
    typedef int number_t;
    
    text_t name = "Zahra Bateninia";
    number_t age = 23;

    std::cout<<name<<'\n';
    std::cout<<age<<'\n';

    return 0;
}