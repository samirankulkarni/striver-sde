class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> ans;
        int a = intervals[0][0];
        int b = intervals[0][1];
        for(int i=1;i<intervals.size();i++){
            int x = intervals[i][0];
            int y = intervals[i][1];
            if(x > b){
                ans.push_back({a,b});
                a = x;
                b = max(y,b);
            }else{
                b = max(y,b);
            }
        }
        ans.push_back({a,b});
        return ans;
    }
};
