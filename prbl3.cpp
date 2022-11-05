/******************************************************************************
14. Longest Common Prefix

Write a function to find the longest common prefix string amongst an array of strings.
If there is no common prefix, return an empty string "".

 

Example 1:

Input: strs = ["flower","flow","flight"]
Output: "fl"
Example 2:

Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.
*******************************************************************************/
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans=strs[0];
        for(int i=0;i<strs.size()-1;i++){
            int mini=min(strs[i].size(),strs[i+1].size());
            for(int j=0;j<=mini;j++){
                if(ans[j]!=strs[i+1][j]){
                ans=ans.substr(0,j);
                break;
                }    
            }
        }
        return ans;
    }
};