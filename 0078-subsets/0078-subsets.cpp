class Solution {
public:
  vector<vector<int>> ans;

  void solve(vector<int>&arr ,vector<int>& nums,int index ){
     
     if(index >= nums.size()){
        ans.push_back(arr);
        return ;
     }
   
     arr.push_back(nums[index]);
     solve(arr,nums,index+1);
     arr.pop_back();

     solve(arr,nums,index+1);

  }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> arr;
      int index=0;
     solve(arr,nums ,index);
        return ans;
    }
};