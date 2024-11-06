class Solution {
public:
    bool canSortArray(vector<int>& nums) {
        int n=nums.size();
        bool sorted=true;
        for(int i=0;i<n;i++){
            sorted=false;
            for(int j=0;j<n-1-i;j++){
                if(nums[j]>nums[j+1]){
                    if(__builtin_popcount(nums[j]) == __builtin_popcount(nums[j+1])){
                        swap(nums[j],nums[j+1]);
                        sorted=true;
                    }
                    else{
                        return false;
                    }
                }
            }
            if(sorted==false){
                break;
            }
        }
        return true;
    }
};