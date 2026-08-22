class Solution {
public:
    bool checkDivisibility(int n) {
        if(n==0) return false;
        int sum=0;
        int prod=1;
        int temp=n;
        while(temp>0){
            int remain=temp%10;
            sum+=remain;
            prod*=remain;
            temp/=10;
        }
        return (n%(sum+prod)==0);
    }
};