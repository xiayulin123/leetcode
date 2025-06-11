class Solution {
public:
    long long continuousSubarrays(vector<int>& nums) {
        long long ans = 0;
        map<int, int> count;
        int left = 0;
        for(int right = 0; right < nums.size(); right++){
            count[nums[right]]++;
            while(count.rbegin()->first - count.begin()->first > 2){
                if(--count[nums[left]] == 0){
                    count.erase(nums[left]);
                }
                left++;
            }
            ans += right - left + 1;
        }
        return ans;
    }

};
