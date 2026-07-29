// 1754. Largest Merge Of Two Strings
// You are given two strings word1 and word2. You want to construct a string merge in the following way: while either word1 or word2 are non-empty, choose one of the following options:

// If word1 is non-empty, append the first character in word1 to merge and delete it from word1.
// For example, if word1 = "abc" and merge = "dv", then after choosing this operation, word1 = "bc" and merge = "dva".
// If word2 is non-empty, append the first character in word2 to merge and delete it from word2.
// For example, if word2 = "abc" and merge = "", then after choosing this operation, word2 = "bc" and merge = "a".
// Return the lexicographically largest merge you can construct.

// A string a is lexicographically larger than a string b (of the same length) if in the first position where a and b differ, a has a character strictly larger than the corresponding character in b. For example, "abcd" is lexicographically larger than "abcc" because the first position they differ is at the fourth character, and d is greater than c.

 
class Solution {
public:
    string largestMerge(string word1, string word2) {

        // index to compare the string char
        int i = 0;
        int k = 0;
        // string to store the ans
        string ans = "";

        // loop to merge the string
        while(i < word1.size() && k < word2.size()){
            // substr -> bcz when the cureent element is becomes equle than it take the next element to comapre give the correct ans
            if(word1.substr(i) > word2.substr(k)){
                ans += word1[i++];
            }
            else{
                ans += word2[k++];
            }
        }
        // for the remaingin elements
        while(i < word1.size()){
            ans += word1[i++];
        }
        while(k < word2.size()){
            ans += word2[k++];
        }
        
        return ans;
    }
};