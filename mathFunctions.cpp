#include <iostream>
#include <cmath>

int main(){

    double x = 3.14;
    double y = 4;
    double z;

    // z = std::max(x, y);
    // z = std::min(x,y);

    // For using these functions we should include cmath header file.
    // z = sqrt(y);
    // z = pow(x, y);
    // z = abs(-4); // which is 4

    z = round(x);

    // For rounding up we use ceil() meaning ceiling 
    // z = ceil(x); // 4
    //  For rounding down we use floor()
    //  z = floor(x): // 3


    std::cout<<z<<'\n';

    return 0;
}