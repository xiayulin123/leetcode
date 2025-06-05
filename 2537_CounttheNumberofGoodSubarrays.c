class Solution {
public:
    long long countGood(vector<int>& nums, int k) {
        long long ans = 0;
        unordered_map<int, int> map;
        int match = 0;
        int left = 0;
        for(int right : nums){
            match += map[right]++;
            while(match >= k){
                match -= --map[nums[left]];
                left++;
            }
            ans+= left;

        }
        return ans;

    }
};
