#include <bits/stdc++.h> 
long long getInversions(long long *nums, int n){
   set<long long> st;
   long long ans = 0;
   for(int i=n-1;i>=0;i--){
       long long x = nums[i];
       if(!st.empty()){
           auto it =  st.lower_bound(x);
           ans += distance(st.begin(), it);
       }
       st.insert(nums[i]);
   }
   return ans;
}
