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
Node* rrr(Node* root, int key){
    Node* prev=NULL;
    Node* nxt;
    int count=0;
    Node* curr= root;
    while(curr!=NULL && count<key){
        Node* temp= curr->next;
        curr->next=prev;
        prev=curr;
        curr=temp;
        count++;
    }
    Node* head=rrr(curr->next,key);
    return prev;
}

int main(){
//code;
return 0;
}