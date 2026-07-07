class Solution {
public:
    long long sumAndMultiply(int n) {
        int sum=0;
        long long x=0;

        while(n!=0){
            int digit;
            digit=n%10;
            if(digit!=0){
                x= x*10 + digit;
                sum += digit;
            }
            n /= 10;
        }

        long long rev=0;
        while(x>0){
            rev = rev*10 + x%10;
            x /= 10;
        }
        return sum*rev;
    }
};