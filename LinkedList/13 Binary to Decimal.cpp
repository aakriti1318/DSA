#include<bits/stdc++.h>
using namespace std;
struct node{
    int data; 
    struct node *next;
    node(int k){
        this->data = k;
        next = NULL;
    }
};

node *rev(node *root){
    node *prev = NULL;
    node *next = NULL; 
    node *curr = root;
    while(curr!=NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    root = prev;
    return root;
}

int fun(node *root){
    int count=1, sum=0;
    while(root!=NULL){
        sum += root->data * count;
        count *= 2;
        root = root->next;
    }
    return sum;
}
void display(node *root){
    while(root->next!=NULL){
        cout<<root->data<<"->";
        root = root->next;
    }
    cout<<root->data<<endl;
}
int main(){
    int n; cin>>n;
    int num; cin>>num;
    node *root, *temp;
    root = temp = new node(num);
    for(int i=1;i<n;i++){
        cin>>num;
        temp->next = new node(num);
        temp = temp->next;
    }
    display(root);
    root = rev(root);
    display(root);
    cout<<fun(root);
    return 0;
}