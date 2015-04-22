#include <vector>
#include <iostream>

int search(const vector<int> &v, int val)
{
    int index;
    int mid = v.size() / 2;
    
    if(v.size() == 0)
    {
        return -1;
    }
    while(index > 0)
    {
        if(val < v.at(mid))
        {
            return; //INC
        }
        else if(val > v.at(mid))
        {
            return; //INC
        }
    }
}

int main()
{
    vector<int> v;
    
    v.push_back(1);
    v.push_back(4);
    v.push_back(35);
    v.push_back(44);
    
    std::cout << v.search(v, 35) << std::endl;
}