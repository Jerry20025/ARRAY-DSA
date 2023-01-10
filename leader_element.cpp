#include <bits/stdc++.h>
using namespace std;
vector<int>leader(int arr[], int n){
    vector<int>ans; 
    int curr=arr[n-1];
    ans.push_back(curr); 
    for(int i=n-2;i>=0;i--){
        if(curr<arr[i]){
            curr=arr[i]; 
            ans.push_back(curr);
        }
    }
    return ans; 
}
void print(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" "; 
    }
}

int main()
{

    int arr[]={2,3,4,5,1,2,3,4,2}; 
    int n=sizeof(arr)/sizeof(arr[0]); 
    vector<int>ans=leader(arr,n);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}
