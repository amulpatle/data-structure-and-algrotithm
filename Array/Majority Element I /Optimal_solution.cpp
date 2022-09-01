#include <iostream>
using namespace std;
int main()
{
    int count = 0;
    int component;
    int arr[3] = {3, 2, 3};

    for (int i = 0; i < 3; i++)
    {

        if (count == 0)
        {
            component = arr[i];
        }
        if (arr[i] == component)
        {
            count += 1;
        }
        else
            count -= 1;
    }
    cout << "hello" << endl;
    cout << component << endl;
    return 0;
}