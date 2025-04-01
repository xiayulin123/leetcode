class Solution {
public:
    long long maxSum(vector<int>& nums, int m, int k) {
        long long ans = 0;
        long long tmp = 0;
        unordered_map<int, int> mapping;

        for(int i =0; i < nums.size(); i++){
            if(i < k - 1){
                tmp += nums[i];
                mapping[nums[i]]++;
                continue;
            }
            tmp += nums[i];
            mapping[nums[i]]++;
            if(mapping.size() >= m){
                ans = max(ans, tmp);
            }
            tmp -= nums[i-k+1];
            if(--mapping[nums[i-k+1]] == 0){
                mapping.erase(nums[i-k+1]);
            }
            
        }
        return ans;
    }
};
