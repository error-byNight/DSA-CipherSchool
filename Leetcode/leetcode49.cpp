//https://leetcode.com/problems/group-anagrams/

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> anagramGroups;

        for (const string& word : strs) {
            string sortedWord = word;
            sort(sortedWord.begin(), sortedWord.end());  // Sort characters
            anagramGroups[sortedWord].push_back(word);   // Group by sorted key
        }

        vector<vector<string>> result;
        for (auto& pair : anagramGroups) {
            result.push_back(pair.second);  // Collect grouped anagrams
        }

        return result;
    }
};
