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

void fun(node *head){
    if(head == NULL) return;
    node *fast = head;
    node *slow = head;
    while(fast->next!=NULL and fast!=NULL){
        fast = fast->next->next;
        slow = slow->next;
    }
    cout<< slow->data;
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
    fun(head);
    //display(head);
    return 0;
}