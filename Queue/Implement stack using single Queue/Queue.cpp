#include <bits/stdc++.h>
using namespace std;

struct Queue
{
    stack<int> s1, s2;
    void enque(int x)
    {

        while (!s1.empty())
        {
            s2.push(s1.top());
            s1.pop();
        }
        s1.push(x);
        while (!s2.empty())
        {
            s1.push(s2.top());
            s2.pop();
        }
    }

    int deque()
    {
        if (s1.empty())
        {
            cout << "queue is empty" << endl;
            exit(0);
        }
        int x = s1.top();
        s1.pop();
        return x;
    }
};

int main()
{
    Queue q;
    q.enque(1);
    q.enque(2);
    q.enque(3);
    q.enque(4);
    cout << q.deque() << endl;
    cout << q.deque();

    return 0;
}