#include <bits/stdc++.h>
using namespace std;

void Reverse(queue<int> &Queue)
{
    if (Queue.empty())
        return;

    int x = Queue.front();
    Queue.pop();
    Reverse(Queue);
    Queue.push(x);
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