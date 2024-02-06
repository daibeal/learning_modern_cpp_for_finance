/*
 * File: 1_main.cpp
 * Purpose: This program demonstrates the use of the vector class from the Standard Template Library (STL).
 * It creates a vector of integers and prints it to the console.
 * Author: @daibeal
 * Date: 06/02/2024
 */

#include <vector>   // For using vector class
#include <string>   // For using string class
#include <iostream> // For using cout

// Function to print a vector
void printVector(const std::vector<int> &vec, const std::string &message)
{

    std::cout << message;
    for (size_t i = 0; i < vec.size(); ++i)
    {
        std::cout << vec[i];
        if (i != vec.size() - 1)
        {
            std::cout << ", ";
        }
    }
    std::cout << "\n";
}

int main()
{

    // using std::vector, std::string, std::cout
    // 'using namespace std ;'not recomended
    std::vector<int> numbers{1, 2, 3};         // Vector of integers
    std::string message{"This is a vector: "}; // Message to be printed before the vector
    printVector(numbers, message);             // Print the vector

    // The auto keyword

    auto k = 1;    // int
    auto k2 = 1.2; // double

    std::cout << k << ", Type: " << typeid(k).name() << "\n";
    std::cout << k2 << ", Type: " << typeid(k2).name() << "\n";

    // Range based FOR Loops

    std::cout << "\nRange-based with &&\n\n";
    for (auto &&i : numbers)
    {
        std::cout << i << " ";
    }

    //Range-based STANTARD FOR LOOPS
std::cout << "\nRange-based STANTARD FOR LOOPS\n\n";
    for(auto iter = numbers.begin(); iter != numbers.end(); ++iter){
        std::cout << *iter  << " "; 
    }

}

