#include<bits/stdc++.h>
using namespace std;
bool fun(string s1, string s2){
    if(s1.size() != s2.size()) return false;
    int count[256] = {0};
    for(int i=0;i<s1.size();i++)
        count[s1[i]]++;
    for(int i=0;i<s2.size();i++)
        count[s2[i]]--;
    for(int i=0;i<256;i++){
        if(count[i]!=0) return false;
    }
    return true;
}
int main(){
    string s1,s2; cin>>s1>>s2;
    if(fun(s1,s2)) cout<<"YES";
    else cout<<"NO";
    return 0;
}