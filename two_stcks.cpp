#include<iostream>
#include<stack>
using namespace std;
struct ts{
    int * arr;
    int top1;
    int top2;
    int cap;
    ts(int n){
        arr= new int[n];
        top1=-1;
        top2=n;
        cap=n;
    }

};
void ps(int arr[], int n){
    stack<int> s;
    s.push(0);
    cout<<1;
    for(int i=1; i<n;i++ ){
        if(arr[i]<arr[s.top()]){
            cout<<i-s.top();
            s.push(i);
        }
        else{
            while(arr[i]>arr[s.top()] && s.empty()==false){
                s.pop();
            }
            if(s.empty()==true){
                cout<<i+1;
                s.push(i);
            }
            else{
                cout<<i-s.top();
                s.push(i);
            }
        }
    }
}
int main(){
//code;
int arr[]={0,1,2,3,4,5,6,4};
ps(arr,8);
return 0;
}