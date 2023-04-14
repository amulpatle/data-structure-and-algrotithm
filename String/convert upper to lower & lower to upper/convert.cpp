#include <iostream>
using namespace std;

void convert(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        return;
    }

    else
        int ch = ch - 'A' + 'a';
    return;
}

int main()
{

    char ch[20];
    cin >> ch;

    for (int i = 0; ch[i] != '\0'; i++)
        convert(ch[i]);

    cout << ch;

    return 0;
}