//naive solution
#include <bits/stdc++.h>

using namespace std;
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
int main()
{
    int arr[]={1,5,3,8,12};
    int n=sizeof(arr)/sizeof(arr[0]); 
    cout<<max_prof(arr,0,n); 

    return 0;
}
/*output: 13
explaination: 5-1=4   we buy when price is 1 and sell when price is 5
              12-3=9 we buy when price is 3 and sell when price is 12 
              so total profit=4+9=13
    when i=0; 
         j=1: here arr[j]>arr[i] so curr_prof=arr[j]-arr[i]+max_prof(arr,start,i-1)+max_prof(arr,j+1,end);
              here max_prof(arr,start,i-1): i-1=-1 so its output from range start to i-1 is 0; 
                   max_prof(arr,j+1,end): j+1=2 so its output from range j+1(2) to end is 9
            therefor curr_prof=5-1+0+9=13
            then profit=max(profit,curr_prof)=13
    when i=0; 
         j=2: here arr[j]>arr[i] so curr_prof=arr[j]-arr[i]+max_prof(arr,start,i-1)+max_prof(arr,j+1,end);
         here max_prof(arr,start,i-1): i-1=-1 so its output from range start to i-1 is 0; 
                   max_prof(arr,j+1,end): j+1=3 so its output from range j+1(3) to end is 4
            therefor curr_prof=5-1+0+4=8
            then profit=max(profit,curr_prof)=max(13,8)=13
            no change 
            
            
            and so on..................................................................
            
*/
