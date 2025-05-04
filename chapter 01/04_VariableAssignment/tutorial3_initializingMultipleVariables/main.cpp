#include <iostream>

int main()
{
    int a = 5, b = 6; // copy-initialization
    std::cout << a << ' ' << b;

    [[maybe_unused]] double pi {3.14159};

    return 0;
}

/*
1. Initialization gives a variable an initial value when the variable is created.
   Assignment gives a value to the variable after it's created

2. Direct-list initialization

3. Direct initialization is like : int x
   Value initialization is like  : int x{}
   Preferred to do value initialization, since it gives x the value 0
*/
