class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        multiset<int> s;
        int n = nums.size();
        int left = 0;
        int ans = 0;
        for(int right = 0; right < n; right++){
            s.insert(nums[right]);
            while((*s.rbegin() - *s.begin()) > limit){
                s.erase(s.find(nums[left]));
                left++;
            }
            ans = fmax(right - left + 1, ans);
        }
        return ans;

    }
};
