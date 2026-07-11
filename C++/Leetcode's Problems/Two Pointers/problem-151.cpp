// 151. Reverse Words in a String
// Given an input string s, reverse the order of the words.

// A word is defined as a sequence of non-space characters. The words in s will be separated by at least one space.

// Return a string of the words in reverse order concatenated by a single space.

// Note that s may contain leading or trailing spaces or multiple spaces between two words. The returned string should only have a single space separating the words. Do not include any extra spaces.


class Solution {
public:
    string reverseWords(string s) {

        reverse(s.begin(), s.end());   // reverse the the main string 
        string ans = ""; // return ans

        // reverse the arrey char of the arrey
        for(int i =0; i<s.size(); i++){
            // store the every part of the arrey
            string word = "";
            // if the taht part is valid
            while(i < s.size() && s[i] != ' '){
                word += s[i];
                i++;
            }
            // reverse that part of the main string
            reverse(word.begin(), word.end());

            // if valid
            if(word.size() > 0){
                ans += " " + word;
            }
        }
        // return the ans from index 1 bcz ans string start from space 
        return ans.substr(1);
    }
};