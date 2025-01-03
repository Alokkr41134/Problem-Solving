class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        double overallSum = 0;
        for (int i = 0; i < n; i++) {
            overallSum += nums[i];
        }

        double leftSum = 0;
        for (int i = 0; i < n - 1; i++) {
            double rightSum = 0;
            leftSum += nums[i];
            rightSum = overallSum - leftSum;
            if (leftSum >= rightSum) {
                count++;
            }
        }

        return count;
    }
};