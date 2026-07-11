
// 557. Reverse Words in a String III
// Easy
// Topics
// premium lock icon
// Companies
// Given a string s, reverse the order of characters in each word within a sentence while still preserving whitespace and initial word order.

class Solution {
public:
    string reverseWords(string s) {

        // ans string with store the final ans
        string ans = "";

        // loop to reverse the every char of the string
        for(int i =0; i<s.size(); i++){
            string word = "";

            // for valid 
            while(i < s.size() && s[i] != ' '){
                word += s[i];
                i++;
            }
            // reverse the string parts
            reverse(word.begin(), word.end());

            if(word.size() > 0){
                ans += " " + word;
            }
        }
        return ans.substr(1);
    }
};