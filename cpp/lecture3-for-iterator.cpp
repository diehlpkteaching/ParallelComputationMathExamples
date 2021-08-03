#include <iostream>
#include <vector>
#include <iterator>

int main()
{
 std::vector<int> values = {1,2,3,4,5};
 for(
    std::vector<int>::const_iterator iter =
    values.begin();
    iter != values.end();
    ++iter
    )
    {
        std::cout << *iter << std::endl;
    }   

}
