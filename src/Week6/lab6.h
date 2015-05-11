#include <queue>
#include <vector>

template<typename T>
struct Greater
{
    bool operator()(T a, T b)
    {
        return a > b;
    }
};

//O(nlog(n)) runtime
template<typename T>
void vectorSort(std::vector<T> &v)
{
    std::priority_queue<T, std::vector<T>, Greater<T> > q;
    for(int i = 0; i < v.size(); ++i)
    {
        q.push(v.at(i));
    }
    for(int j = 0; j < v.size(); ++j)
    {
        v.at(j) = q.top();
        q.pop();
    }
}