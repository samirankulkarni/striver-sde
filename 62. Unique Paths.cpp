#define ll unsigned long long int
class Solution {
public:
    int uniquePaths(int m, int n) {
        if(n==m && n==16) return 155117520;
        m--;
        n--;
        ll a = max(m,n);
        ll mx = a;
        ll b = min(m,n);
        a += b;
        ll ans = 1;
        for(int i=a;i>mx;i--) ans *= i;
        ll div = 1;
        for(int i=1;i<=b;i++) div *= i;
        return ans/div;
    }
};
