#include<iostream>
#include<stack>
using namespace std;
void ps(int arr[], int n){
    stack<int> s;
    s.puch(arr[0]);
    cout<<1;
    for(int i=1; i<n;i++ ){
        if(arr[i]<s.top()){
            cout<<i-s.top();
            s.push(i);
        }
        else{
            while(arr[i]>s.top() && s.empty()==false){
                s.pop();
            }
            if(s.empty==true){
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