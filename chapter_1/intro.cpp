#include <string>   //string
#include <iostream> // cout
#include <vector>   //vector
#include <cstdlib>  //size t

int main(){
    using namespace std;  // Bad practice, can cause crashes in runtime
    // using std::vector, std::string, std::cout; 

    vector<int> x{1,2,3};
    string s{"This is a vector: "};
    cout << s << x[0] << "," << x[1] << "," << x[2] << "\n"; 
    

    // Using a for loop with size_t
    cout << "Another way, ... " << endl;
    for (size_t i = 0; i < x.size(); i++)
    {
        cout << x[i] << "\n";
    }
    return 0;

}