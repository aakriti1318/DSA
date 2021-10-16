#include<bits/stdc++.h>
using namespace std;
struct node{
    int data; 
    node *next;
    node(int k){
        data = k;
        next = NULL;
    }
};

node *fun(node *head, int x){
    node *temp = new node(x);
    if(head == NULL) return temp;
    if(head->data>x){
        temp->next = head;
        return temp;
    }
    node *curr = head;
    while(curr->next!= NULL and curr->next->data<x){
        curr = curr->next;
    }
    temp->next = curr->next;
    curr->next = temp;
    return head;
}

void display(node *head){
    while(head != NULL){
        cout<<head->data<<"->";
        head = head->next;
    }
}

int main(){
    int n; cin>>n;
    int arr[n];
    cin>>arr[0];
    node *head, *temp;
    head = temp = new node(arr[0]);
    for(int i=1;i<n;i++){
        cin>>arr[i];
        temp->next = new node(arr[i]);
        temp = temp->next;
    }
    fun(head,2);
    display(head);
    return 0;
}