
class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        int n = nums.size();
        vector<int> ans;

        ans.push_back(nums[0]^((1 << maximumBit)-1));
        for(int i = 1 ; i< n; i++){
           nums[i] = nums[i]^nums[i-1];
           ans.push_back(nums[i]^((1 << maximumBit)-1));
        }
        reverse(ans.begin(),ans.end());
        return ans;

    }
};