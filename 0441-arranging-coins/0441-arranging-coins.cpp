class Solution {
public:
    long long sqrt(long long n){
        if (n <= 1) return n;
        long long r=n;
        while(r>n/r){
            r=(r+n/r)/2;            
        }
        return r;
    }
    int arrangeCoins(int n) {
        long long m = (long long)n;
        return (sqrt(8*m+1)-1)/2;
    }
};