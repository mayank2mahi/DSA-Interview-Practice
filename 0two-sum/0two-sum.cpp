// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         for (int i = 0; i < nums.size(); i++) {
//             for (int j = i + 1; j < nums.size(); j++) {
//                 if (nums[i] + nums[j] == target) {
//                     return {i, j};
//                 }
//             }
//         }
//         return {};
//     }
// };


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp; // Map to store value -> index mapping
        for (int i = 0; i < nums.size(); i++) {
            int com = target - nums[i]; // Complement
            if (mp.find(com) != mp.end()) { 
                return {mp[com], i}; // Found the pair
            }
            mp[nums[i]] = i; // Store index of the current number
        }
        return {}; // No pair found
    }
};
