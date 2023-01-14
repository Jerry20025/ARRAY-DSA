#include <bits/stdc++.h>

using namespace std;
//SOLUTION 1
int max_prof(int arr[], int start , int end){
    if(end<=start){
        return 0; 
    }
    int profit=0; 
    for(int i=start;i<end;i++){
        for(int j=i+1;j<end;j++){
            if(arr[j]>arr[i]){
                int curr_prof=arr[j]-arr[i]+max_prof(arr,start,i-1)+max_prof(arr,j+1,end); 
                profit=max(profit,curr_prof); 
            }
        }
    }
    return profit; 
}
//SOLUTION 2
int max_prof_2(int arr[], int n){
    int profit=0; 
    for(int i=1;i<n;i++){
        if(arr[i]>arr[i-1]){
            profit+=(arr[i]-arr[i-1]);
        }
    }
    return profit; 
}
int main()
{
    int arr[]={10,8,12,12};
    int n=sizeof(arr)/sizeof(arr[0]); 
    cout<<max_prof_2(arr,n); 

    return 0;
}
