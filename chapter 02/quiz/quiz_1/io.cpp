#include "io.h"
#include <iostream>

int readNumber()
{
    int input;
    std::cin >> input;
    return input;
}

void writeAnswer(int num)
{
    std::cout << "The number is: " << num << '\n';
}
