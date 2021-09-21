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
struct node *reversebygroup(node *head, int k){
    int count = 0;
    node *next = NULL, *prev = NULL;
    node *curr = head;
    while(curr!=NULL and count<k){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }
    if(next!=NULL){
        node *temp = reversebygroup(next, k);
        head->next = temp;
    }
    return prev;
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
    int k; cin>>k;
    head = reversebygroup(head,k);
    display(head);
    return 0;
}