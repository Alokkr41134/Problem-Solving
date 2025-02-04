class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int n = nums.size();
        int MaxSum =nums[0];
        int sum=nums[0];
        for(int i = 1 ;i<n;i++){
           if(nums[i]<=nums[i-1]){
            sum=nums[i];
           }
           else{
            sum+=nums[i];
           }
           
           MaxSum=max(sum,MaxSum);
        }

        return MaxSum;
    }
};