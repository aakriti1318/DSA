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

void search(node *head, int x){
    int count=1;
    while(head != NULL){
        if(head->data == x){
            cout<<"found at index "<<count<<endl;
            break;
        }
        else{
            count++;
            head = head->next;
        }
    }
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
    search(head, 2);
    display(head);
    return 0;
}