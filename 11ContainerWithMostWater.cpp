class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxs = 0;
        int left = 0;
        int right = height.size()-1;
        while(left < right){
            maxs = max(min(height[left], height[right]) * (right - left),maxs);
            if(height[left] <= height[right]){
                left++;
            }else{
                right--;
            }
        }
        
        return maxs;
    }
};