#include <iostream>

//Use shift + F7 to debug
/*
Step into, debug into the flow of the code

Step over (next line), skipping function, useful if you don't want to debug that function

Step out, skipping the whole function
*/
void printValue(int value)
{
    std::cout << value << '\n';
}

int main()
{
    printValue(5);

    return 0;
}
