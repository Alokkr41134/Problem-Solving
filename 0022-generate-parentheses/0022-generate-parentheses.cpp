class Solution {
public:
   
   
  vector<string> ans; 

  void solve(string&curr ,int open,int close, int n){

  if(curr.length()==2*n){
      ans.push_back(curr);
      return;
  }
   if(open < n){
    curr.push_back('(');
    solve(curr,open+1,close,n);
     curr.pop_back();
   }
   
    
    if(close < open){
    curr.push_back(')');
    solve(curr,open,close+1,n);
     curr.pop_back();
    }
  }
   
    vector<string> generateParenthesis(int n) {


        string curr="";
        int open=0;
        int close=0;
        solve(curr,open,close,n);

        return ans;
    }
};