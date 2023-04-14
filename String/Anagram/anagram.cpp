#include <bits/stdc++.h>
// #include <string>
using namespace std;

bool anagram(string a, string b)
{
    if (a.length() != b.length())
        return false;

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    return (a == b);
}

int main()
{
    string a = "aaabbb";
    string b = "aaabbb";

    if (anagram(a, b))
    {
        cout << "string is anagram" << endl;
    }
    else
        cout << "Not anagram" << endl;
    return 0;
}