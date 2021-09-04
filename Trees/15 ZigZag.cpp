#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* left; 
    node* right;
    node(int key){
        data = key;
        left = NULL;
        right = NULL;
    }
};

vector<int> zigzag(node *root){
    vector<int> v;
    stack<node*> s1, s2;
    s1.push(root);
    node *curr;
    while(!s1.empty() || !s2.empty()){
        while(!s1.empty()){
            curr = s1.top();
            s1.pop();
            v.push_back(curr->data);
            if(curr->right) s2.push(curr->right);
            if(curr->left) s2.push(curr->left);
        }
        while(!s2.empty()){
            curr = s2.top();
            s2.pop();
            v.push_back(curr->data);
            if(curr->left) s1.push(curr->left);
            if(curr->right) s1.push(curr->right);
        }
    }
    return v;
}

node* inserttree(vector<int> v, node *root, int i, int n){
    if(i<n){
        node *tmp = new node(v[i]);
        root = tmp;
        root->left = inserttree(v,root->left,2*i+1,n);
        root->right = inserttree(v,root->right,2*i+2,n);   
    }
    return root;
}
int main(){
    int n; cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int a; cin>>a;
        v.push_back(a);
    }
    node *root = inserttree(v,root,0,n);
    vector<int> ans = zigzag(root);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}