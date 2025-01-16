class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        int x = 0;
        int y = m-1;
        while(x<n && y>=0){
            int val = matrix[x][y];
            if(val == target) return true;
            if(val < target) x++;
            else y--;
        }
        return false;
    }
};
