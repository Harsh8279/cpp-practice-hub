/*

https://leetcode.com/problems/merge-strings-alternately/description/

Merge Strings Alternately

You are given two strings word1 and word2. Merge the strings by adding letters in alternating order, starting with word1. If a string is longer than the other, append the additional letters onto the end of the merged string.

Return the merged string.

Example 1:

Input: word1 = "abc", word2 = "pqr"
Output: "apbqcr"
Explanation: The merged string will be merged as so:
word1:  a   b   c
word2:    p   q   r
merged: a p b q c r
Example 2:

Input: word1 = "ab", word2 = "pqrs"
Output: "apbqrs"
Explanation: Notice that as word2 is longer, "rs" is appended to the end.
word1:  a   b 
word2:    p   q   r   s
merged: a p b q   r   s
Example 3:

Input: word1 = "abcd", word2 = "pq"
Output: "apbqcd"
Explanation: Notice that as word1 is longer, "cd" is appended to the end.
word1:  a   b   c   d
word2:    p   q 
merged: a p b q c   d
 

Constraints:

1 <= word1.length, word2.length <= 100
word1 and word2 consist of lowercase English letters.



*/

#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2) {

        string merged_string = "";
        int limit_1 = word1.size();
        int limit_2 = word2.size();

        if(word2.size()>word1.size()){
            limit_1 = word2.size();
            limit_2 = word1.size();
        }
        int i;
        
        for(i = 0;i<limit_1;i++){
            if(i<word1.size()){
                merged_string+=word1[i];
            }
            if(i<word2.size()){
                merged_string+=word2[i];
            }
        }
        if(i<limit_2){
            for(int j = i;j<limit_2;j++){
                merged_string+=word2[i];
            }

        }
        
        return merged_string;

    }
};

int main(){

    Solution sol1 = Solution();

    string s1 = "abcd";
    string s2 = "pq";

    s1 = "ab";
    s2 = "pqrs";

    cout<<sol1.mergeAlternately(s1, s2);


}