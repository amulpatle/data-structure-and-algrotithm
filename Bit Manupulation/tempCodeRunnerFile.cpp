#include<iostream>
using namespace std;
int sss(int n, int m){
    int count = 0;
    int total = 0;
    int m;
    while(m){
        m = m/2;
        count++;
    }
    
    total = (m/2)*count;
    return total;
}

int main (){
    int n,m;
    cout<<"Enter range "<<endl;
    cin>>n>>m;
    cout<<sss(n,m)<<endl;
    return 0;
}