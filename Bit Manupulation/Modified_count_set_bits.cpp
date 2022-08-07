// MODIFIED COUNT SET BITS METHOD 
//OR Brian Kernighan’s Algorithm

#include<iostream>
using namespace std;
int coutn_set_bits(int n){
    int ans = 0;
    while(n){
        n = n & (n-1);
        ans++;
    }
    return ans;
}
int main (){
    int n = 15;
    cout<<coutn_set_bits(n)<<endl;
    return 0;
}