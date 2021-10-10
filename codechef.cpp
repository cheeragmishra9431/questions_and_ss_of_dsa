#include<iostream>
#include<array>
#include<vector>

#include <bits/stdc++.h>
using namespace std;
int missingNumber(vector<int> arr) 
   { 
       sort(arr.begin(), arr.end());
       if(arr[0]!=0){
           return 0;
       }
       //arr.erase(unique(arr,arr+n),arr+n));
       
       int i=0, j=1;
       while(i<arr.size()){
           if(arr[i]>0){
               
               if(arr[i]==j){
                   j++;
               }
           }
           i++;
       }
       
       return j;
   }
void subarrays(int arr[], int N){                      //include this vector<int> &v
    vector< vector<int> > subarray; 
    for(int start=0; start<N; start++) 
    { 
        for(int end=0; end<N; end++) 
        { 
            vector<int> sub; 
            for(int i=start; i<=end; i++) 
            { 
                sub.push_back(arr[i]); 
            } 
            subarray.push_back(sub); 
            sub.clear(); 
        } 
    }
    // vector< int> resarray;
    for(int i=0; i< subarray.size(); i++){
        // int res1=missingNumber(subarray[i]);
        // v.push_back(res1);
        for( int j=0; j<subarray[i].size(); i++){
            cout<<subarray[i][j]<<endl;
        }
    }
}
void printSubArrays(vector<int> arr, int start, int end, vector<int> &final)
{     
    // Stop if we have reached the end of the array    
    if (end == arr.size())
        return;
       
    // Increment the end point and start from 0
    else if (start > end)
        printSubArrays(arr, 0, end + 1, final);
           
    // Print the subarray and increment the starting point
    else
    {
        // cout << "[";
        vector<int> v1;
        for (int i = start; i <= end; i++){
            v1.push_back(arr[i]);
            
        }
        int res1=missingNumber(v1);
        v1.clear();
        final.push_back(res1);
         
        // cout << arr[end] << "]" << endl;
        printSubArrays(arr, start + 1, end, final);
    }
     
    return;
}
int main(){
    // vector<int> v;
    // int arr[]={0,1,2,4};
    // int arr1[]={0,1,2};
    // vector<int> v(arr, arr+4);
    // vector<int> v1(arr1, arr1+3);
    // subarrays(arr,4);
    // cout<<missingNumber(v1);
    vector<int> final;
    vector<int> arr = {0,1,2};
    printSubArrays(arr, 0, 0, final);
    for(int i=0; i<final.size(); i++){
        cout<<final[i];
    }
    cout<<endl;
    sort(final.begin(), final.end());
    cout<<final[5];
}    