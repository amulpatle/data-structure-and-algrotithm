#include <iostream>
#include <vector>
using namespace std;
struct mystack
{
    /* data */
    vector<int> v;

    void push(int x)
    {
        v.push_back(x);
    }
    void pop()
    {
        v.pop_back();
    }
    int peek()
    {
        return v.back();
    }
    int isEmpty()
    {
        return v.empty();
    }
    int size()
    {
        return v.size();
    }
};

int main()
{
    mystack s;
    s.push(4);
    s.push(8);
    s.push(65);
    cout << s.peek() << endl;
    cout << s.size() << endl;
    cout << s.isEmpty() << endl;
    return 0;
}