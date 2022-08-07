 // SIMPLE METHOD
 
 #include<iostream>
using namespace std;
int Count_Set_Bits(int n){
    int count = 0;
    while (n){
        count += n & 1;
        n = n>>1;
    }
    return count;
}
int main (){
    int n = 15;
    cout<<Count_Set_Bits(n)<<endl;
    return 0;
}