#include <bits/stdc++.h>
using namespace std;

void Reverse(queue<int> &Queue)
{
    stack<int> s;
    while (!Queue.empty())
    {
        s.push(Queue.front());
        Queue.pop();
    }
    while (!s.empty())
    {
        Queue.push(s.top());
        s.pop();
    }
}

int main()
{
    queue<int> q;
    q.push(12);
    q.push(5);
    q.push(15);
    q.push(20);
    Reverse(q);
    while (!q.empty())
    {
        cout << q.front() << " " << endl;
        q.pop();
    }

    return 0;
}