class Solution {
public:
    int smallestNumber(int n, int t) {
        while(true){ 
            int temp=n;

            int digitProd=1;
            while(temp!=0){
                int remain= temp%10;
                digitProd*=remain;
                temp/=10;
            }
            if (digitProd%t==0){
                return n;
            }
            n++;
        }
    }
};