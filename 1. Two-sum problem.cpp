// Problem: Two Sum
// Platform: LeetCode
// Date: Nov 2025
// Time Complexity: O(n)
// Space Complexity: O(n)

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;
        for (int i = 0; i < nums.size(); i++) {
            int diff = target - nums[i];
            if(map.find(diff) != map.end()){
                return {map[diff], i};
            }
            map[nums[i]] = i;
        }  
    return {}; 
    }
};