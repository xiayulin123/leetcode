class Solution {
public:
    int reverse(int x) {
        int result = 0;
        while(x != 0){
            int tem = x % 10;
            if(result > 214748364 || (result == 214748364 && tem > 7)){
                return 0;
            }
            if(result < (-214748364) || (result == -214748364 && tem < -8)){
                return 0;

            }
            result = result*10 + tem;
            x = x / 10;
        }
    return result;
    }
};