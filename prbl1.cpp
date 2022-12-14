/******************************************************************************
1. Two Sum

Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.
You can return the answer in any order.

Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
Example 2:

Input: nums = [3,2,4], target = 6
Output: [1,2]
*******************************************************************************/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        
        for(int i=0;i<nums.size();i++){
            ans.push_back(i);
            int y=target-nums[i];
            for(int j=i+1;j<nums.size();j++){
                if(y==nums[j]){
                    ans.push_back(j);
                    return ans;
                }
                
            }
         ans.pop_back();
        }
        return ans;
    }
};

//optimized
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       unordered_map<int,int>m;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            if(m.find(target-nums[i])!=m.end()){
                 ans.push_back(m[target-nums[i]]);
                 ans.push_back(i);
               
              }
            
            m[nums[i]]=i;
        }
        return ans;
    }
};