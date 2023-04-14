#include <bits/stdc++.h>
using namespace std;

bool anagram(string a, string b)
{
    if (a.length() != b.length())
        return false;

    char count[256] = {0};

    for (int i = 0; i < a.length(); i++)
    {
        count[a[i]]++;
        count[b[i]]--;
    }

    for (int i = 0; i < 256; i++)
    {
        if (count[i] != 0)
            return false;
    }

    return true;
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