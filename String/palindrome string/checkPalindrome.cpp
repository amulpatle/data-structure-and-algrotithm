#include <bits/stdc++.h>
using namespace std;

bool checkPlindrome(char ch[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s < e)
    {
        if (ch[s++] != ch[e--])
            return false;
    }

    return true;
}
int getLength(char ch[])
{
    int l = 0;
    for (int i = 0; ch[i] != '\0'; i++)
        l++;

    return l;
}
int main()
{

    char ch[20];
    cout << "Enter string :" << endl;

    cin >> ch;

    if (checkPlindrome(ch, getLength(ch)))
        cout << "Palindrome string " << endl;
    else
        cout << "not Palindrome" << endl;
    return 0;
}