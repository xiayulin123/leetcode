class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> arr;
        for(int i = 0; i < nums.size(); i ++){
            auto test = arr.find(nums[i]);
            if(test != arr.end()){
                if(abs(arr[nums[i]] - i) <= k ){
                    return true;
                } 
            }
            arr[nums[i]] = i;
        }
        return false;
    }
};