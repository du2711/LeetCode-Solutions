class Solution {
public:
    int mySqrt(int x){
        if(x<=0) return x;
        else{
            double x0=x;
            double x1= (x0 +x/x0)/2;
            while((x0-x1)>0){
                x0=x1;
                x1=(x0 +x/x0)/2;
            }
            return (int)x1;
        }
    }
};