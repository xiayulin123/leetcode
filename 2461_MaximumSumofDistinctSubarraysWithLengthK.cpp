class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long ans = 0;
        long long tmp = 0;
        unordered_map<int, int> mapping;
        for(int i = 0; i < nums.size(); i++){
            if(i < k - 1){
                tmp += nums[i];
                mapping[nums[i]]++;
                continue;
            }
            mapping[nums[i]]++;
            tmp += nums[i];
            // printf("\n Value is %d", tmp);
            if(mapping.size() >= k){
                ans = max(ans, tmp);
            }
            mapping[nums[i-k+1]]--;
            tmp -= nums[i-k+1];
            if(mapping[nums[i-k+1]] == 0){
                mapping.erase(nums[i-k+1]);
            }

        }
        return ans;
    }
};
