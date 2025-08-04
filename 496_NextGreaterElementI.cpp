class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int>s;
        unordered_map<int, int>map;
        int size1 = nums1.size();
        int size2 = nums2.size();
        vector<int> ans(size1);
        for(int i = 0; i < size2; i++){
            while(!s.empty() && nums2[i] > s.top()){
                map[s.top()] = nums2[i];
                s.pop();
            }
            s.push(nums2[i]);
        }
        while(!s.empty()){
            map[s.top()] = -1;
            s.pop();
        }
        for(int i = 0; i < size1; i++){
            ans[i] = map[nums1[i]];
        }
        return ans;
    }
};
