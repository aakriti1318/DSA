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

void fun(node *head, int x){
    // Naive: count number of nodes and then traverse till n-x+1
    // Efficient
    node *fast = head;
    node *slow = head;
    for(int i=0;i<x;i++){
        if(fast == NULL) return;
        fast = fast->next;
    }
    while(fast!=NULL){
        slow = slow->next;
        fast = fast->next;
    }
    cout<<slow->data;
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
    fun(head, 2);
    //display(head);
    return 0;
}