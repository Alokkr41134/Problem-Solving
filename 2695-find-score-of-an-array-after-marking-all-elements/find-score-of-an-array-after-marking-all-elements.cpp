class Solution {
public:
    long long findScore(vector<int>& nums) {
        int n = nums.size();

        vector<bool> visited(n,false);

        priority_queue<pair<int,int> ,vector<pair<int,int>> ,greater<pair<int,int>>> pq;
        
        for(int i=0 ; i<n ;i++){
            pq.push({nums[i],i});
        }

        long long score =0;

        while(!pq.empty()){

           pair<int,int> temp = pq.top(); 
           int ele = temp.first;
           int idx = temp.second;
           pq.pop();

           if(visited[idx] == false){
            visited[idx]=true;
            score+=ele;
            if(idx-1 >=0 && visited[idx-1]==false){
                visited[idx-1]=true;
            }
            if(idx+1 <= n && visited[idx+1]==false){
                visited[idx+1]=true;
            }

           }
        }

        return score;
        
    }
};