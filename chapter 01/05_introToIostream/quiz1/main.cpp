#include <iostream>

int main()
{
    std::cout << "Enter a number: " ; //ask user for a number
    int x{}; //define variable x to hold user input
    std::cin >> x; //get number from KB and store it in variable x
    std::cout << "You entered " << x << '\n';

    return 0;
}
