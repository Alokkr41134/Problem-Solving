class Solution {
public:
    string compressedString(string word) {
        int n=word.length();
        string ans="";
        int i=0;
        while(i<n){
            int count=0;
            char ch=word[i];
            while(i<n && count<9 && word[i]==ch){
                count++;
                i++;
            }
            ans+= to_string(count)+ch;

        }

        return ans;
    }
};