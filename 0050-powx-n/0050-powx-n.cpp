class Solution {
public:
    double solve(double x,long long n){
        if(n==0) return 1;
        if(n==1) return x;
        if(n%2==0){
            double res=solve(x,n/2);
            return res*res;
        }
        else{
            double res=solve(x,(n-1)/2);
            return x*res*res;
        }
    }
    double myPow(double x, int n) {
        long long N=n;
        if(N<0){
            x=1/x;
            N=-N;
        }
        return solve(x,N);
    }
};