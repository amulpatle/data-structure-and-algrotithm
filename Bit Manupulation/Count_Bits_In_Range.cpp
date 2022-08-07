// #include<iostream>
// using namespace std;
// int  (int m){
//     int count=0;
//     while(m){
//         m = m/2;
//         count++;
//     }
//     return count;
// }
// int Count_Bits_In_Range(int m){
//     int coun = count(m);
//     int total = 0;
//     total = (2^(coun-2))*(coun-1);
//     return total;
// }


// int main (){
//     int m;
//     cout<<"Enter range "<<endl;
//     cin>>m;
//     cout<<Count_Bits_In_Range(m)<<endl;
//     // cout<<count(m);
//     return 0;
// }


#include<iostream>
using namespace std;
int power_Two_In(int n){
    int x = 0;
    while((1<<x)<=n){
        x++;
    }
        return x-1;
}
int countSetBits(int n){
    if(n == 0){
        return 0;
    }
    int x = power_Two_In(n);
    int p1 = x * (1<<(x-1));
    int p2 = n - (1<<x)+ 1;
    int val = n - (1<<x);
    int ans = p1 + p2 + countSetBits(val);
    return ans;

}
int main (){
    int n;
    cout<<" Enter value "<<endl;
    cin>>n;
    cout<<countSetBits(n)<<endl;
    //cout<<(1<<3);
   

    return 0;
}