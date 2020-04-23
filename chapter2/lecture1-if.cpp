// Example with if statement
#include <iostream>

int main()
{
    size_t result = 0;
    for(size_t i = 1; i != 5; i++){
	    if(	i % 1 == 0)
		    result = result + i;
	    else
		    result = result + i * i;
}
    return 0;
}

