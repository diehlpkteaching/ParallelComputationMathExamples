#include <vector>
#include <algorithm>
#include <iostream>
#include <chrono>
#include <execution>
#include <numeric>

int main(){

std::vector<int> v = std::vector(1,10);
std::atomic<int> sum{0};
//int sum = 0;
std::for_each(std::execution::par, std::begin(v), std::end(v), [&](int i) {
  sum += i;
});

    std::cout << sum << std::endl;
    
    return 0; 
}
