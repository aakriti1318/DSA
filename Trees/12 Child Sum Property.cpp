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

bool fun(node *root){
    int lh=0, rh=0;
    if(root==NULL || root->left == NULL and root->right == NULL) return true;
    else{
        if(root->left) lh = root->left->data;
        if(root->right) rh = root->right->data;
        if(root->data == lh+rh and fun(root->left) and fun(root->right)) return true;
        else return false;
    }
}

int main(){
    int n; cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int a; cin>>a;
        v.push_back(a);
    }
    node *root = inserttree(v,root,n,0);
    if(fun(root) == true) cout<<"YES";
    else cout<<"NO";
    return 0;
}