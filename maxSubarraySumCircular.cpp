int normalmaxsum(vector<int>&arr){
        int res=arr[0], maxending=arr[0]; 
        int n=arr.size(); 
        for(int i=1;i<n;i++){
            maxending=max(maxending+arr[i], arr[i]); 
            res=max(maxending,res);
        }
    return res; 
    }
    int circularsum(vector<int>&arr){
        int n=arr.size();
        int max_normal=normalmaxsum(arr); 
        // if max_normal is negative , its mean that all element in array is negative
        if(max_normal<0){
            return max_normal; 
        }
        int arr_sum=0; 
        for(int i=0;i<n;i++){
            arr_sum+=arr[i]; 

            // invert the array 
            arr[i]=-arr[i]; 
        }
        int  maxcircular_sum=arr_sum+normalmaxsum(arr); 

        return max(max_normal, maxcircular_sum);
}
    int maxSubarraySumCircular(vector<int>& nums) {
        int ans=circularsum(nums); 
        return ans; 
    }
