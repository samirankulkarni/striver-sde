class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        set<int> ans;
        for(int i:nums){
            mp[i]++;
            if(mp[i]>(nums.size()/3)) ans.insert(i);
        }
        vector<int> v;
        for(int i:ans) v.push_back(i);
        return v;
    }
};
