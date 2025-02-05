class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int n = s1.length();

        if (s1 == s2)
            return true;

        int diffCountIdx = 0;
        int firstCountIdx = 0;
        int SecondCountIdx = 0;

        for (int i = 0; i < n; i++) {
            if (s1[i] != s2[i]) {
                diffCountIdx++;

                if (diffCountIdx > 2) {
                    return false;
                } else if (diffCountIdx == 1) {
                    firstCountIdx = i;
                } else {
                    SecondCountIdx = i;
                }
            }
        }

        return s1[firstCountIdx] == s2[SecondCountIdx] &&
               s1[SecondCountIdx] == s2[firstCountIdx];
    }
};