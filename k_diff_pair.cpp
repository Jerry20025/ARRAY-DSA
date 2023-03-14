/* 
  for the case input ={1,1,1,1,1} k=0; 
  solution should be 1 because only pair (1,1) has the zero difference and the paise should be distinct
  and there is no pair is distinct
  therefore its answer is 1;
  
  we will creat a set of pair which will insert the pair which is absolute difference of k 
  and we will return the size of set 

*/
int findPairs(vector<int>& arr, int k) {
        int n=arr.size();
        int i=0; 
        int j=1; 
        set<pair<int,int>> ans;
        sort(arr.begin(),arr.end());
        while(j<n){
            int diff=arr[j]-arr[i]; 
            if(diff == k){
                ans.insert({arr[i],arr[j]});
                ++j; 
                ++i; 
            }
            else if(diff > k){
                ++i;
            }
            else{
                ++j;
            }

            if(i==j){
                j++;
            }
        }
        return ans.size();
    }
