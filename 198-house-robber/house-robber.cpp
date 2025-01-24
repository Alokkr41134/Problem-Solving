// Recursion + Memo
/*
 class Solution {
public:
    int solve(vector<int>& nums, int index, int n, vector<int>& array) {
        if (index >= n)
            return 0;

        if (array[index] != -1) {
            return array[index];
        }
        int steal = nums[index] + solve(nums, index + 2, n, array);
        int NotSteal = solve(nums, index + 1,n, array);

        return array[index] = max(steal, NotSteal);
    }

    int rob(vector<int>& nums) {
        int n = nums.size();
        // max size of nums array is 100 so take array of 101
        vector<int> array(101, -1);

        return solve(nums, 0, n, array);
    }
};
*/

class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> array(n+1,0);  // housess
        
        array[0]=0;
        array[1]=nums[0]; // first house

        for(int i=2 ; i<=n ;i++){
          int steal = nums[i-1] + array[i-2];
          int NotSteal = array[i-1];
          array[i] =max(steal,NotSteal);
        }

        return array[n];
        
    }
};