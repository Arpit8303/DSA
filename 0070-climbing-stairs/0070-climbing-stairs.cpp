class Solution {
public:
    int climbStairs(int n) {
        if(n==1) return 1;
        long long a=1;
        long long b=2;
        for(int i=2;i<n;i++){
       long long c = a+b;
       a=b;
       b=c;
        }
        return b;
    }
};