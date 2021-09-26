#include<iostream>
using namespace std;
struct Node{
    int key;
    Node* left;
    Node* right;
    Node(int x){
        key=x;
        left=NULL;
        right=NULL;
    }
};
int arr[100000];
void inorder(Node* root, int* i){
    inorder(root->left,i);
    if(root==NULL){
        return;
    }
    arr[*i]=root->key;
    *i=*i +1;
    inorder(root->right,i);
}
int main(){
//code;
return 0;
}