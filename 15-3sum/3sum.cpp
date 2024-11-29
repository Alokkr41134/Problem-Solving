class Solution {
public:

  void check(vector<int>nums ,int i ,  vector<vector<int>> &ans , int target ){
    int j = nums.size()-1;

    while(i<j){
        if(nums[i]+nums[j] > target){
            j--;
        }
       else if(nums[i] + nums[j] < target){
        i++;
       }
       else{

         while( i<j && nums[i]==nums[i+1]){
            i++;
         }
           while( i<j && nums[j]==nums[j-1]){
            j--;
         }
         ans.push_back( {-target , nums[i] , nums[j]});
         i++,j--;
       }

    }
  }

    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
       if(n < 3){
        return {};
       }

        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        for(int i=0; i<n ;i++){
            int target= -(nums[i]);
            if( i!=0 && nums[i]==nums[i-1]){
                continue;
            }
           check(nums,i+1, ans,target); 
        }

        return ans;
    }
};