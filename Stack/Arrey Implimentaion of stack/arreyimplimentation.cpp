#include <iostream>
using namespace std;
struct mystack
{
    int *arr;
    int cap;
    int top;
    mystack(int c)
    {
        arr = new int[cap];
        cap = c;
        top = -1;
    }
    void pop()
    {
        if (top == -1)
            cout << "stack underflow";
        top--;
    }
    void push(int x)
    {
        if (top == cap - 1)
            cout << "stack overflow";
        top++;
        arr[top] = x;
    }
    int peek()
    {
        if (top == -1)
            cout << "stack is empty";
        return arr[top];
    }
    bool isEmpty()
    {
        if (top == -1)
            return 1;
        return -1;
    }
    int size()
    {
        top++;
        return top;
    }
};
int main()
{

    mystack s(5);
    s.push(5);
    s.push(15);
    s.push(51);
    s.push(35);
    s.push(35);
    cout << s.peek() << endl;
    s.pop();
    cout << s.peek() << endl;
    s.pop();
    cout << s.peek() << endl;
    cout << s.size() << endl;
    return 0;
}