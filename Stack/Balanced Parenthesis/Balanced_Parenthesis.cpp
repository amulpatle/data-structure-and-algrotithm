#include <iostream>
#include <stack>
using namespace std;
bool check(char a, char b)
{
    return ((a == '(' && b == ')') || (a == '[' && b == ']') || (a == '{' && b == '}'));
}
bool check_parenthesis(string str)
{
    stack<char> s;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '(' || str[i] == '{' || str[i] == '[')
        {
            s.push(str[i]);
        }
        else
        {
            if (s.empty() == true)
            {
                return false;
            }
            else
            {
                if (check(s.top(), str[i]) == false)
                {
                    return false;
                }
                else
                {

                    s.pop();
                }
            }
        }
    }
    return true;
}
int main()
{
    string str = "{()}[]";
    if (check_parenthesis(str))
        cout << "Balanced";
    else
        cout << "Not Balanced";
    return 0;
}