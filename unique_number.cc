class Solution {
    //answer (very simple by using xor)
    int singleNumber(vector<int>& nums) {
        int ret = 0;
        for (auto e: nums) ret ^= e;
        return ret;
    }


   
   
    // self way
public:
    int singleNumber(vector<int>& nums) {
        int exchange = nums.size()-1;
        
            for (int i =0; i < (nums.size()-1)/2;i++){
                int initial = nums[0];
                bool goal = true;

                for(int j = 1;j<=exchange;j++){
                    if(nums[j] == initial){
                        goal = false;
                        int tem = nums[exchange];
                        if(exchange != j){

                        nums[exchange] = nums[j];
                        nums[j]=tem;
                        }
                        
                        exchange--;
                        tem = nums[exchange];
                        

                        nums[exchange] = nums[0];
                        nums[0]= tem;
                        exchange--;
                        
                       
                        break;
                    }
                
            }
            if(goal){
                    return nums[0];
                }    
        }
        
        return nums[0];
    }
};