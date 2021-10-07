#include<bits/stdc++.h>
using namespace std;
bool fun(string s1, string s2){
    if(s1.size() != s2.size()) return false;
    string s;
    s1 = s1+s2;
    return s1.find(s2)!=string::npos;
}
int main(){
    string s1,s2; cin>>s1>>s2;
    cout<<fun(s1,s2);
    return 0;
}