#include<iostream>
using namespace std;
void Clear_ith_Bit(int &n, int i){
    int mask = ~(1<<i);
    n = n & mask;
}
int main (){
    int n = 15;
    int i;
    cin>>i;
    Clear_ith_Bit(n,i);
    cout<<n<<endl;
    
    return 0;
}