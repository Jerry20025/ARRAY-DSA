 int maxSubArray(vector<int>& nums) {
        int sum=nums[0]; 
        int lastsum=nums[0]; 
        for(int i=1;i<nums.size();i++){
            lastsum=max(lastsum+nums[i],nums[i]); 
            sum=max(sum,lastsum); 
        }
        return sum;
        
    }
