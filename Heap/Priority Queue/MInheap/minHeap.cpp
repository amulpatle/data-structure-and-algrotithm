#include <iostream>
using namespace std;
#include <queue>
int main()
{
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(56);
    pq.push(90);
    pq.push(45);
    while (!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }
    return 0;
}