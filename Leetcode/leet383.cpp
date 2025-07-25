///https://leetcode.com/problems/ransom-note/


class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> freq(26, 0);
        for (char c : magazine) {
            freq[c - 'a']++;
        }
        for (char c : ransomNote) {
            if (freq[c - 'a'] == 0) {
                return false;
            }
            freq[c - 'a']--;
        }
        return true;
    }
};