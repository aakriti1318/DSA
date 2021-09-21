#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *next;
    node(int data){
        this->data = data;
        next = NULL;
    }
};

void display(node *root){
    while(root!=NULL){
        cout<<root->data<<"->";
        root = root->next;
    }
}
int main(){
    int n; cin>>n;
    int num; cin>>num;
    node *head, *tail;
    head = tail = new node(num);
    for(int i=0;i<n-1;i++){
        cin>>num;
        tail->next = new node(num);
        tail = tail->next;
    }
    display(head);
    return 0;
}