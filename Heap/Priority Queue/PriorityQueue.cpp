#include <iostream>
#include <queue>
using namespace std;
int main()
{
    priority_queue<int> pq;
    pq.push(50);
    pq.push(56);
    pq.push(7);
    cout << pq.top() << " ";
    cout << pq.size() << " ";
    while (pq.empty() == false)
    {
        cout << pq.top() << " ";
        pq.pop();
    }
    return 0;
}