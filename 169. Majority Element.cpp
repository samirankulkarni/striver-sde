class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int m = n/2;
        map<int,int> mp;
        for(int i:nums){
            mp[i]++;
            if(mp[i]>m) return i;
        }
        return -1;
    }
};
