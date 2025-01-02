class Solution {
public:
    vector<vector<int>> ans;
  
  void solve(vector<int>& candidates ,  vector<int>&arr ,int index , int target ){
    
    if(target == 0){
        ans.push_back(arr);
        return;
    }

    if(index == candidates.size() || target < 0 ){
        return ;
    }
     
    arr.push_back(candidates[index]);
    solve(candidates , arr , index , target - candidates[index] );
    arr.pop_back();
    solve(candidates , arr , index+1 , target);
  }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>arr;
        int index = 0;
        solve(candidates ,arr , index , target);

        return ans;
    }
};