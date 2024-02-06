#include <limits>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include <map>
#include <iostream>
#include <chrono>
std::map<int, int> fib_cache;

int fib_no_memo(int a)
{
    if (a <= 1)
    {
        return a;
    }
    else
    {
        return fib_no_memo(a - 1) + fib_no_memo(a - 2);
    }
}


int fib_with_memo(int a)
{
    if (a <= 1)
    {
        return a;
    }

    if (fib_cache.count(a))
    {
        return fib_cache[a];
    }

    fib_cache[a] = fib_with_memo(a - 1) + fib_with_memo(a - 2);
    return fib_cache[a];
}

int main()
{
    // std::cout << "Max value of size_t: " << std::numeric_limits<size_t>::max() << std::endl;

    // size_t count = 10;
    // for (size_t i = 0; i < count; i++)
    // {
    //     std::cout << fib((int)i) << ",";
    // }
    // return 0;

    int n = 4000; // Change this to the value you want to test

    auto start1 = std::chrono::high_resolution_clock::now();
    std::cout << "Fibonacci number (no memo): " << fib_no_memo(n) << std::endl;
    auto end1 = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> diff1 = end1 - start1;
    std::cout << "Time taken (no memo): " << diff1.count() << " s" << std::endl;

    auto start2 = std::chrono::high_resolution_clock::now();
    std::cout << "Fibonacci number (with memo): " << fib_with_memo(n) << std::endl;
    auto end2 = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> diff2 = end2 - start2;
    std::cout << "Time taken (with memo): " << diff2.count() << " s" << std::endl;

    return 0;
}
