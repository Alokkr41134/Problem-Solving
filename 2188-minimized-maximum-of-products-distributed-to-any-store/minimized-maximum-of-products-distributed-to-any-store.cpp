class Solution {
public:
    int minimizedMaximum(int n, vector<int>& quantities) {
        int minc = 1, maxc = 100000;
        int result = -1;
        while(minc <= maxc){
            int currc = minc + (maxc-minc)/2;
            int stores = 0;
            for(auto& q : quantities){
                 stores += ceil(q/(currc*1.0));
            }
            if( stores <= n) {
                result = currc;
                maxc = currc - 1;
            }
            else minc = currc + 1;
        }
        return result;
    }
};