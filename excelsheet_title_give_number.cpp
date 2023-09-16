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





//answer
class Solution {
public:
    int titleToNumber(string columnTitle) {
        int result = 0;
        int ex = 1;
        for(int i = columnTitle.size()-1; i >= 0; i --){
            int k = columnTitle[i] -'A' +1;
            result += k * ex;
            ex *= 26;
        }
        return result;
    }
};