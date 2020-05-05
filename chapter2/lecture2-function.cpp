// Example: function defintion
#include <iostream>

size_t f(size_t i)
{
    if(	i % 1 == 0)
	    return  i;
	else
		return  i * i;
}


int main()
{
    size_t result = 0;
    for(size_t i = 1; i != 5; i++){
        result = f(i);
    }

    std::cout << "Result= " << result << std::endl;

    return 0;
}

