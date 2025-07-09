//https://leetcode.com/problems/length-of-last-word/

class Solution {
public:
    int lengthOfLastWord(string s) {
       int count = 0;
       int i = s.length()-1;

       //edge case: skipping the space if it is there after last word
       while(i>0 && s[i]==' '){
        i--;
       } 
        //Now traversing through the last until space comes
       while(i>=0 && s[i] !=' '){
        count++;
        i--;
       }
       return count;
    }
};