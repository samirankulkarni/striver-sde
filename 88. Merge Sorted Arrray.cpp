class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> a;
        for(auto i:nums2) a.push_back(i);
        for(int i=0;i<m;i++) a.push_back(nums1[i]);
        sort(a.begin(),a.end());
        for(int i=0;i<m+n;i++) nums1.pop_back();
        for(auto i:a) nums1.push_back(i);

    }
};
