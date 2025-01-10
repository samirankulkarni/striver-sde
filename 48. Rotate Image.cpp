class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        // transpose
        // reverse
        int n = matrix.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i >= j) swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(int i=0;i<n;i++){
            std::reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};
