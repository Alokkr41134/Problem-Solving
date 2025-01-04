class Solution {
public:
    int countPalindromicSubsequence(string s) {
        int n = s.size();
        unordered_set<char> letters;
        for (int i = 0; i < n; i++) {
            letters.insert(s[i]);
        }
        int result=0;
        for (auto letter : letters) {

            int leftIdx = -1;
            int rightIdx = -1;
            for (int i = 0;  i < n; i++) {

                if (s[i] == letter) {

                    if (leftIdx == -1) {
                        leftIdx = i;
                    }
                    rightIdx = i;
                }
            }

            unordered_set<char> st;
            for (int middle = leftIdx + 1; middle <= rightIdx - 1; middle++) {
                st.insert(s[middle]);
            }
            result += st.size();
        }

        return result;
    }
};