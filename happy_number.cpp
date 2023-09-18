class Solution {
public:
    bool isHappy(int n) {
        int x = 0;
        
        while(n > 0){
            int k = pow(n%10,2);
            x+=k;
            n = n/10;
        }
        cout<<x<<endl;
        if(x == 1 || x==7){
            return true;
        }if(x< 10){
            return false;
        }
       
        return isHappy(x);

        
        
    }
};