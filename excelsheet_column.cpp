class Solution {
public:
    string convertToTitle(int columnNumber) {
        string line;
        while(columnNumber > 0){
            int rest = (columnNumber -1)% 26 +1;
            line.insert(line.begin(),('A' + rest - 1));
            columnNumber = (columnNumber - rest)/26;
        }
        return line;

    }
};