class Solution {
public:
    int mySqrt(int x){
        if(x<=0) return x;
        long long low=0,high=x;
        while(low<=high){
            long long mid=low+(high-low)/2;

            if(mid*mid == x) return (int)mid;
            else if(mid*mid > x) high=mid-1;
            else low=mid+1;
        }
        return (int)high;
    }
};