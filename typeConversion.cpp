#include <iostream>

int main(){
    // Changing one data type to another either implicitly or explicitly.
    int correct = 7;
    int questions = 10;

    // double score = correct/questions * 100; it doesn't work as expected, incorrect result

    // C-style Casting(not recommended):
    // double score = correct/(double)questions * 100; 

    // C++ Casting:
    double score = correct / static_cast<double>(questions) * 100;

    std::cout<<score<<'\n';

    return 0;
}