#include <iostream>
using namespace std;

void clearInRange(int &x, int i, int j)
{
    int a = -1 >> j;
    int b = (1 << i) - 1;
    int mask = a | b;

    x = x & mask;
}

int main()
{
    int a = 15207;
    clearInRange(a, 4, 11);
    cout << a;
}