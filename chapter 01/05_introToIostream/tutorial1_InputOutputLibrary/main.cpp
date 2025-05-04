#include <iostream>

int main()
{
    std::cout << "Hi" << std::endl;
    std::cout << "My name is Leon" << std::endl;

    int x{5};
    std::cout << "x is equal to: " << x << '\n';
    std::cout << "Yes!" << "\n";

    int a{};
    std::cin >> a;

    int b{};
    std::cin >> b;

    std::cout << "You entered " << a << " and " << b << '\n';
    return 0;
}
