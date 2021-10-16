#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[] = {3,2,8,15,-8};
    int n=7, sum = 19;
    unordered_set<int> s;
    for(int i=0;i<n;i++){
        if(s.find(sum - a[i])!=s.end()){
            cout<<"YES";
            break;
        }
        s.insert(a[i]);
    }
    cout<<"NO";
    return 0;
}