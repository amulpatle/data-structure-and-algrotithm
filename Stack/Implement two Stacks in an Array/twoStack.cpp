#include <iostream>
using namespace std;
class twoStack
{
private:
    int *arr;
    int top1, top2, cap;

public:
    twoStack(int n)
    {
        cap = n;
        top1 = -1;
        top2 = n;
        arr = new int[n];
    }
    bool push1(int x)
    {
        if (top1 < top2 - 1)
        {
            top1++;
            arr[top1] = x;
            return true;
        }
        return false;
    }
    bool push2(int x)
    {
        if (top1 < top2 - 1)
        {
            top2--;
            arr[top2] = x;
            return true;
        }
        return false;
    }
    bool pop1()
    {
        if (top1 >= 0)
        {
            top1--;
            return true;
        }
        else
            return false;
    }
    bool pop2()
    {
        if (top2 <= cap)
        {
            top1++;
            return true;
        }
        else
            return false;
    }
    int size1()
    {
        return (top1 + 1);
    }
    int size2()
    {
        return (cap - top2);
    }
};
int main()
{
    twoStack ts(5);
    ts.push1(5);
    ts.push2(10);
    ts.push2(15);
    ts.push1(11);
    ts.push2(7);

    cout << "size of stack 1 is : " << ts.size1() << endl;
    cout << "size of stack 2 is : " << ts.size2() << endl;

    return 0;
}