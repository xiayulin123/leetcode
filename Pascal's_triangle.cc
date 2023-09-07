// create a pascal's triangle
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        std::vector<std::vector<int>> result;

        for (int i = 0; i < numRows; i++){
            std::vector<int> row(i+1, 1);

            for (int j= 1; j < i; j++){
                row[j] = result[i-1][j-1] + result[i-1][j];
            }
            result.push_back(row);
        }
    return result;
    }
};
// get specific row in the pascal's triangle

// math C mn=C m−1 n × (n−m+1)/m  and C 0 n = 1


class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> res;
        res.push_back(1);
        for(int i = 0; i < rowIndex; i++){
            res.push_back((long)res[i]*(rowIndex-i)/(i+1));  
        }
        return res;
    }
};

// return a specific row by creating whole pascal's triangle
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> previous, current;
        for (int i = 0; i <= rowIndex; ++i) {
            current.resize(i + 1);
            current[0] = current[i] = 1;
            for (int j = 1; j < i; ++j) {
                current[j] = previous[j - 1] + previous[j];
            }
            previous = current;
        }
        return previous;
    }
};

