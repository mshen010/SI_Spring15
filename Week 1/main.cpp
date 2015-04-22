#include <iostream>
#include <string>

using namespace std;

//Declared outside of functions
template<typename T>


void get_in(T& x, string question)
{
    cout << question << endl;
    cin >> x;
    cout << x << endl;
}
int main()
{
    int x;  
    string question = "Enter a number.";
    
    get_in(x, question);
    
    return 0;
}

//Point of templates would be so the function that takes in x can take in any 
//type and still return the type that x was given. For example, if x was 
//declared as Car x, or string x, the function would still work.