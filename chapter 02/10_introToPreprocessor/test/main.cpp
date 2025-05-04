#include <iostream>
#define MY_NAME "Leon"

#define PRINT_JOE

int main()
{
    std::cout << "My name is: " << MY_NAME << std::endl;

    #ifdef PRINT_JOE
        std::cout << "Joe \n";
    #endif // PRINT_JOE

    #ifdef PRINT_BOB
        std::cout << "Bob \n";
    #endif // PRINT_BOB

    #ifndef PRINT_BOB
        std::cout << "Bob \n";
    #endif // PRINT_BOB

    return 0;
}
