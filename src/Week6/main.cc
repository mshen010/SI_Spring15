#include "lab6.h"
#include <iostream>

int main()
{
    std::vector<int> v;
    
    v.push_back(5);
    v.push_back(2);
    v.push_back(10);
    v.push_back(7);
    v.push_back(1);
    
    for(int i = 0; i < v.size(); ++i)
    {
        std::cout << v.at(i) << ' ';
    }
    std::cout << std::endl;
    vectorSort(v);
    
    for(int i = 0; i < v.size(); ++i)
    {
        std::cout << v.at(i) << ' ';
    }
    std::cout << std::endl;
    return 0;
}