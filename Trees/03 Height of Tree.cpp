#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node *left;
    node *right;
    node(int key){
        data = key;
        left = right = NULL;
    }
};

node* inserttree(vector<int> v, node *root, int n, int idx){
    if(idx<n){
        node *tmp = new node(v[idx]);
        root = tmp;
        root->left = inserttree(v,root->left,n, 2*idx+1);
        root->right = inserttree(v,root->right,n, 2*idx+2);
    }
    return root;
}

int height(node *root){
    if(root == NULL) return 0;
    return 1+max(height(root->left),height(root->right));
}
int main(){
    int n; cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int a; cin>>a;
        v.push_back(a);
    }
    node *root = inserttree(v,root,n,0);
    cout<<height(root);
    return 0;
}