class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int j = 0;
        unordered_map<int, int> mp;
        for(int i = 0; i < nums.size(); i++){
            mp[nums[i]]++;
        }
        for(auto i : mp){
            if(i.second == 1){
                j = i.first;
            }
        }
        return j;
    }
};