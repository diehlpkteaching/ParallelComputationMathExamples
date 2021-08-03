// Compute the sum using a for loop
#include <iostream>

int main()
{
    unsigned int result = 0;
    unsigned int n = 10;

    for(size_t i = 0; i < n; i=i+1)
        result = result + i;

    std::cout << "Result= " << result << std::endl;

    return 0;
}

