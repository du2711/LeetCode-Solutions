class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum=0,prod=1;
        int remain;
        while(n>0){
            remain=n%10;
            sum=sum+remain;
            prod=prod*remain;
            n=n/10;
        }
        return prod-sum;
    }
};