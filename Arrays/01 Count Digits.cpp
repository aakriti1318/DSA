#include<bits/stdc++.h>
using namespace std;

int it_countdigits(int n){ // time: theta(n)
    int count=0;
    while(n!=0){
        n = n/10;
        count++;
    }
    return count;
}

int rec_countdigits(int n){ // time: theta(n)
    if(n==0) return 0;
    return (1+rec_countdigits(n/10));
}

int log_countdigits(int n){ // time: theta(1)
    return floor(log10(n)+1);
}

int main(){
    int n; cin>>n;
    cout<<it_countdigits(n)<<endl;
    cout<<rec_countdigits(n)<<endl;
    cout<<log_countdigits(n)<<endl;
    return 0;
}