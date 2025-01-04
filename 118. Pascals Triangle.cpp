class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        int n = numRows;
        if(n == 1) return {{1}};
        vector<vector<int>> ans;
        vector<int> a = {1};
        ans.push_back(a);
        n--;
        while(n--){
            a = ans.back();
            vector<int> b;
            b.push_back(a[0]);
            int m = a.size();
            for(int i=0;i<m-1;i++) b.push_back(a[i]+a[i+1]);
            b.push_back(a[m-1]);
            ans.push_back(b);
        }
        return ans;
    }
};
