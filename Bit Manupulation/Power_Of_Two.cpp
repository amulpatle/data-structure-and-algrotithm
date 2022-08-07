#include<iostream>
using namespace std;

int main (){
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    if(n & (n-1) == 0){
        cout<<"Power of 2"<<endl;

    }
    else{
    cout<<"It is not power of 2"<<endl;
    }
    return 0;
}
