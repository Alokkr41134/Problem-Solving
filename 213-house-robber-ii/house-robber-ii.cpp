class Solution {
public:
    int solve(vector<int>& nums, int i, int j,
              vector<int>& array) { // i staarting house , j last house
        if (i > j) {
            return 0;
        }
        if (array[i] != -1) {
            return array[i];
        }
        int steal = nums[i] + solve(nums, i + 2, j, array);
        int Not_Steal = solve(nums, i + 1, j, array);
        return array[i] = max(steal, Not_Steal);
    }

    int rob(vector<int>& nums) {
        int n = nums.size();
       
        if (n == 1) {
            return nums[0];
        }
        if (n == 2) {
            return max(nums[0], nums[1]);
        }
        // [1,2,3,1] house
        vector<int> array1(n + 1, -1);
        int take_0th_index_house = solve(nums, 0, n - 2, array1); // [1,2,3]

        vector<int> array2(n + 1, -1);
        int take_1st_index_house = solve(nums, 1, n - 1, array2); //[2,3,1]

        return max(take_0th_index_house, take_1st_index_house);
    }
};