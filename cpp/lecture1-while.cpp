// Compute the sum using a while loop
#include <iostream>

int main()
{
    unsigned int result = 0;
    unsigned int n = 10;

    size_t i = 0;    
    while ( i < n)
    {
        result = result + i;
        i+= 1;
    }
    std::cout << "Result= " << result << std::endl;

    return 0;
}

