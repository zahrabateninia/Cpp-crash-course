#include <iostream> 

namespace first{
    int x= 1;
}


namespace second{
    int x= 2;
}

int main(){
    using namespace first;
    using std::cout;

    cout<<x<<'\n'; // prints 1
    cout<<second::x;  // prints 2
    return 0;
}

/*
 Namespace provides a solution for name conflicts. Each entity needs a unique name.
 A namespace allows for identically named entities as long as the namespaces are different.
*/
