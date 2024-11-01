class Solution {
public:
    string makeFancyString(string s) {
      int len=s.length();
      string ans="";
      ans+=s[0];
    for(int i=1;i<len;i++){
      if(s[i]==s[i-1] && s[i]==s[i+1]){
        continue;
      }
      else{
        ans+=s[i];
      }
    }

    return ans;
    }
};