#include <iostream>
#include <string>
using namespace std;

void reverse(char ch[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s < e)
    {
        swap(ch[s++], ch[e--]);
    }
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

    char name[20];
    cout << "Enter your name :";
    cin >> name;
    cout << "Your Name is : " << name << endl;

    cout << "Length of name is: " << getLength(name) << endl;

    cout << "reversed String :" << endl;
    reverse(name, getLength(name));
    cout << name << endl;
    return 0;
}