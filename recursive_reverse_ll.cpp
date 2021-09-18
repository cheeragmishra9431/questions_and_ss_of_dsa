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
Node* rrr(Node* root, Node* prev){
    if(root==NULL){
        return prev;
    }
    Node* temp=root->next;
    root->next=prev;
    prev=root;
    rrr(temp,prev);
}
int main(){
//code;
return 0;
}