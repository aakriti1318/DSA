#include<bits/stdc++.h>
using namespace std;
int fun(string s){
    int res = INT_MAX;
    int f[256];
    for(int i=0;i<256;i++) f[i] = -1;
    for(int i=0;i<s.size();i++){
        if(f[s[i]] == -1) 
            f[s[i]] = i;
        else 
            res = min(res, f[s[i]]);
    }
    return (res == INT_MAX) ? -1:res;
}
int main(){
    string s; cin>>s;
    cout<<fun(s);
    return 0;
}