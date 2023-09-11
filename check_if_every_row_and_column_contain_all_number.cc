#import<iostream>
class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int columns = matrix.size();
        unordered_set<int> row_arr;
        unordered_set<int> col_arr;
        for(int i = 0; i < rows; i++){
            row_arr.clear();
            col_arr.clear();

            for(int j =0; j<columns;j++){
                if(row_arr.count(matrix[i][j])){
                    return false;
                }
                row_arr.insert(matrix[i][j]);
                if(col_arr.count(matrix[j][i])){
                    return false;
                }
                col_arr.insert(matrix[j][i]);
                std::cout<<matrix[i][j]<<std::endl;
            }
        }
        return true;
    }
};