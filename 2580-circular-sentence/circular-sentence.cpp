class Solution {
public:
    bool isCircularSentence(string sentence) {
          istringstream iss(sentence);
        vector<string> words;
        string word;

        while (iss >> word) {
            words.push_back(word);
        }

        // Check if the last character of each word matches the first character of the next word
        int n = words.size();
        for (int i = 0; i < n; ++i) {
            // Last character of the current word
            char lastChar = words[i].back();
            // First character of the next word (circularly)
            char firstChar = words[(i + 1) % n][0];

            if (lastChar != firstChar) {
                return false;
            }
        }

        return true; 
    }
};