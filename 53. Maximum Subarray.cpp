class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        priority_queue<int,vector<int>,greater<int>> pq;
        int n = nums.size();
        vector<int> a(n+1,0);
        pq.push(0);
        int ans = *max_element(nums.begin(),nums.end());
        for(int i=1;i<=n;i++){
            a[i] = a[i-1] + nums[i-1];
            ans = max(ans,a[i]-pq.top());
            pq.push(a[i]);
        }
        return ans;
    }
};
