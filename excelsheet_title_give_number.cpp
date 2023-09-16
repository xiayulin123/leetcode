class Solution {
public:
    int titleToNumber(string columnTitle) {
        int result = 0;
        int ex = 0;
        while(columnTitle != ""){
            int num = 1;
            char test = 'A';


            char last = columnTitle.back();
            columnTitle.pop_back();
            while(test != last){
                num += 1;
                test += 1;
            }
            result += num*pow(26,ex);
            ex++;
        }
        return result;
    }
};