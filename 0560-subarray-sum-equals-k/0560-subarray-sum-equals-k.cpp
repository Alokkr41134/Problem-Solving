class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int> prefixsumMap;
        prefixsumMap[0]=1;

        int currentsum=0 , count=0;

        for(int i=0 ;i<n ;i++){
            currentsum+=nums[i];
            int removesum = currentsum - k ;
            count = count + prefixsumMap[removesum];
            prefixsumMap[currentsum]++;

        }
        
     return count;
    }
};