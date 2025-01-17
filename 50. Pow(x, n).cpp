class Solution {
public:
    double myPow(double x, int n) {
        if(n == 0) return 1;
        else if(n == 1) return x;
        else if(n == -1) return 1/x;
        double t = myPow(x,n/2);
        t *= t;
        if(n&1){
            if(n<0) return (1/x) * t;
            else return x * t;
        }else{
           return t; 
        }
        return 1;
    }
};
