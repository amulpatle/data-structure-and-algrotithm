#include <iostream>
#include <stack>
using namespace std;

void reverse(string s)
{
    stack<string> st;

    char ch = " ";
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] = ' ')
        {
            st.push(ch);
            ch = "";
        }
        else
            ch + s[i];
    }

    for (int i = 0; i < s.size(); i++)
    {
        cout << st.top() << " ";
        st.pop();
    }
}

int main()
{

    string s = "i am amul";
    reverse(s);
    return 0;
}