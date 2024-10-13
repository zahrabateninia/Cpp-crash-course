#include <iostream>
#include <cstdlib> // for srand() and rand() functions
#include <ctime>

int main(){
    // pseudo-random: Not truly random but close.

    srand(time(NULL)); // Seed the random number generator with the current time, 
    // why? If you do not call srand() or always use the same seed (like srand(0);),
    //  you will get the same sequence of random numbers every time you run the program.


    int num1 = (rand() % 6) + 1;
    int num2 = (rand() % 6) + 1;
    int num3 = (rand() % 6) + 1;

    std::cout<<num1<<'\n';
    std::cout<<num2<<'\n';
    std::cout<<num3<<'\n';

    return 0;
}

// The time() function returns the current time as the number of seconds elapsed since January 1, 1970 (also known as the Unix epoch). 
// By passing NULL as an argument, you're asking time() to return the current time.