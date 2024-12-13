class Solution {
public:
   long long findScore(vector<int>& nums) {
        int n = (int)nums.size();
        
        // Min-heap: stores pairs of (value, index)
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<>> pq;
        for (int i = 0; i < n; i++) {
            pq.push({nums[i], i});
        }

        vector<bool> marked(n, false);
        long long score = 0;

        while (!pq.empty()) {
            auto [val, idx] = pq.top();
            pq.pop();

            // If already marked, skip
            if (marked[idx]) continue;

            // Add to score and mark
            score += val;
            marked[idx] = true;

            // Mark neighbors if unmarked
            if (idx - 1 >= 0 && !marked[idx - 1]) {
                marked[idx - 1] = true;
            }
            if (idx + 1 < n && !marked[idx + 1]) {
                marked[idx + 1] = true;
            }
        }

        return score;
    }
};