class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>> v;
        int n = nums.size();
        for(int i=0;i<n;i++) v.push_back({nums[i],i});
        sort(v.begin(),v.end());
        int l = 0;
        int r = n-1;
        while(l<r){
            if(v[l].first + v[r].first == target){
                return {v[l].second,v[r].second};
            }else if(v[l].first + v[r].first > target){
                r--;
            }else{
                l++;
            }
        }
        return {-1,-1};
    }
};
