class Solution {
public:
    bool rotateString(string s, string goal) {
        int len=s.size();
        if(s.size() != goal.size())
            return false;

        for(int i=0;i<len;i++){
            rotate(s.begin(),s.begin()+1,s.end());
            if(s==goal)
              return true;

        }

        return false;
    }
};