class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> checked;
        for(int i = 0; i < nums.size(); i++){
            auto test = checked.find(nums[i]);
            if(test != checked.end()){
                return true;
            }
            checked[nums[i]] = i;
        }
        return false;
    }
};
