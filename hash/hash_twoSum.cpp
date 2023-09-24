class Solution {

public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> list;
        for(int i = 0; i < nums.size(); i++){
            auto rest = list.find(target-nums[i]);
            if(rest != list.end()){
                return {i, rest->second};
            }
            list[nums[i]] = i;
        }
        return {};
    }
};