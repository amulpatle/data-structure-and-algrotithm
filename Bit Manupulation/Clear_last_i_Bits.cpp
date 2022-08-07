#include<iostream>
using namespace std;
void Clear_last_i_Bits(int &n, int i ){
    int mask = (1<<i);
    n = n & mask;
}
int main (){
    int n = 15;
    int i ;
    cout<<"Enter Index Number"<<endl;
    cin>>i;
    Clear_last_i_Bits(n,i);
    cout<<n <<endl;

    return 0;
}