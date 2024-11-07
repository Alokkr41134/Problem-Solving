class Solution {
public:
 int largestCombination(vector<int>& candidates) {
        int ans = INT_MIN;
        for(int i = 0;i < 32; i++){
            int res = 0;
            for(int j = 0;j < candidates.size(); j++){
                if (candidates[j] & (1 << i)) {
                    res++;
                }
            }
            ans = max(ans,res);
        }
        return ans;
    }
};