class Solution {
public:
    int majorityElement(vector<int>& nums) {
        std::unordered_map<int, int> line;
        int max = 0;
        int appears = 0;
        for( int i : nums){
            line[i]++;
            if(line[i] > appears){
                appears = line[i];
                max = i;
            }

        }
        return max;
    }
};