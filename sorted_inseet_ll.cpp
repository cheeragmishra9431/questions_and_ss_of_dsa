#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node(int x){
        data=x;
        next=NULL;
    }
};
Node* sortedi(Node* root, int x){
    if(root==NULL){
        Node* temp= new Node(x);
        return temp;
    }
    if(x<root->data){
        Node* temp= new Node(x);
        temp->next=root;
        return temp;

    }
    Node* cirr=root;
    while(cirr!=NULL && cirr->data<x){
        cirr=cirr->next;
    }
    Node* temp= new Node(x);
    temp->next=cirr->next;
    cirr->next=temp;
    swap(cirr->data,temp->data);
    return root;

    
}
int main(){
//code;

return 0;
}