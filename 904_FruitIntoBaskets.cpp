class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int ans = 0, left = 0;
        unordered_map<int, int> counter;
        for(int right = 0; right < fruits.size(); right++){
            counter[fruits[right]]++;
            while(counter.size()>2){
                counter[fruits[left]]--;
                if(counter[fruits[left]] == 0){
                    counter.erase(fruits[left]);
                }
                left++;
            }
            ans = max(ans, right - left + 1);
        }
        return ans;
    }
};
