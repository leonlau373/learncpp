#include <iostream>

int main()
{
    int a; // default - initialization (no initializer)

    // Traditional initialization forms:
    int b = 5; //copy initialization (initial value after equal sign)
    int c (6); //direct initialization (initial value in parenthesis)

    // Modern initialization forms (preferred):
    int d{7}; // Direct-list initialization (initial value in braces)
    int e{}; //value-initialization
    return 0;
}
