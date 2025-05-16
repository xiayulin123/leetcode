class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int ans = 0;
        int l = 0;
        unordered_map <int, int> map;
        for(int r = 0; r < nums.size(); r++){
            map[nums[r]]++;
            while(map[nums[r]] > k){
                map[nums[l]]--;
                l++;
            }
            ans = fmax(ans, r - l + 1);
            
            
        }
        return ans;
    }
};
