#include<iostream>
using namespace std;
void Clear_ith_Bit(int &n, int i){
    int mask = ~(1<<i);
    n = n & mask;
}
void Update_ith_Bit(int &n, int i, int v){
    Clear_ith_Bit(n,i);
    int mask = (v<<i);
    n = n | mask;
}
int main (){
    int n = 15;
    int i;
    cout<<"Enter Index Number"<<endl;

    cin>>i ;
    int v;
    cout<<"Enter Value "<<endl;
    cin>>v;
    Update_ith_Bit(n,i,v);
    cout<<n;
    
    return 0;
}