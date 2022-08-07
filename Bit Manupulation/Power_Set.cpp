#include <bits/stdc++.h>
using namespace std;
vector<string> power_set(string s){
    vector<string> ans;
    int n = pow(2,s.length());
    for(int i = 1; i<n; i++){
        int x = i;
        int j = 0;
        string c = "";
        while(x){
            if(x&1){
                c = c + s[j];
            }
            j++;
            x = x>>1;

        }
        ans.push_back(c);
    }
    sort(ans.begin(), ans.end());
    return ans;
}
	int main (){
        // int tc;
        // cin>>tc;
        // while(tc--){
        //     string s;
        //     cin>>s;
        //     solution ob;
        //     vector<string>res = ob.power_set(s);
        //     for(auto i : res)
        //     cout<<i << " ";
        //     cout<<"\n";
        // }

        vector<string> a ('a,b,c');
        cout<<power_set(a);
        return 0;
    }