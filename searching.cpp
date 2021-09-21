#include<iostream>
using namespace std;
bool binary_s(int arr[],int x, int n){
    int low=0;
    int high= n-1;
    while(low<=high){
        int mid= (low+high)/2;
        if(arr[mid]==x){
            return true;
        }
        if(arr[mid]>x){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return false;
}
int main(){
//code;
int gf[]={1,2,3,4,5,6,7};
cout<<binary_s(gf,4,7);
return 0;
}