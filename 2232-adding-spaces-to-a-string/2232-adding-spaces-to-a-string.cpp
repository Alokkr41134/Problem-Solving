class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        int n1 = s.size();
        int n2=spaces.size();
        int i=0,j=0;
        string result="";
      
        while(i<n1){
            if( j<n2 && i==spaces[j]){
                result+=" ";
                j++;
            }
            result+=s[i];
            i++;
        }
        return result;
    }
};