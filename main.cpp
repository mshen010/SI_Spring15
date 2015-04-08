#include <vector>
#include <iostream>

using namespace std;

template <typename Iter>

void my_reverse(Iter first, Iter last)
{
    for(; first != last; ++first, --last)
    {
        swap(*first, *last);
    }
}

void my_rotate(Iter first, Iter n_first, Iter last)
{
    if(n_first == first)
    {
        return;
    }
    if(n_first == last)
    {
        my_reverse(first, last);
    }
}
//The function should rotate the container given three Bidirectional iterators:
//first, n_first and last. The rotate should make n_first the first element in 
//the container and n_first-1 the last element in the container. The new order 
//should be [n_first, ..., last, first, ... n_first-1]

1 2 3 4
4 3 2 1 
4 1 2 3


int main()
{
    vector<int> vec;
    
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    
    for(auto vec_iter = vec.begin(); vec_iter != vec.end(); vec_iter++)
    {
        cout << *vec_iter << ' ';
    }
        
    vec.my_reverse();
    
    for(auto vec_iter = vec.begin(); vec_iter != vec.end(); vec_iter++)
    {
        cout << *vec_iter << ' ';
    }
}
