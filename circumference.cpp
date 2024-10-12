#include <iostream>

int main(){
    const double PI = 3.14; // when defined const it says the compiler to prevent it form modifying (read-only)
    double radius = 10;
    double circumference = 2 * PI * radius;
    std::cout<<circumference<<"cm";


    return 0;
}