#include <iostream>

int main(){
    double temp;
    char unit;

    std::cout<<"************* Temperature Conversion *************\n";
    std::cout<<"F = Fahrenheit\n";
    std::cout<<"C = Celsius\n";

    std::cout<<"Which unit you want to convert to?: ";
    std::cin>>unit;

    if(unit == 'F' || unit == 'f'){
        std::cout<<"Enter the temperature in Celsius: ";
        std::cin>>temp;

        temp = (1.8 * temp) + 32.0;
        std::cout<<"Temperature is: "<<temp<<"F\n";
    }
    else if(unit == 'C' || temp == 'c'){
        std::cout<<"Enter the temperature in Fahrenheit: ";
        std::cin>>temp;

        temp = (temp - 32)/ 1.8;
        std::cout<<"Temperature is: "<<temp<<"C\n";
    }else{
        std::cout<<"Please either enter F or C\n";
    }


    std::cout<<"**************************************************";

    return 0;
}