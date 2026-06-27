class Solution {
public:
    bool isPalindrome(int x) {
        int original = x;
        long long rev=0,remain=0;

        while(x>0){
            remain=x%10;
            rev=(rev*10)+remain;
            x=x/10;
        }

        if(original==rev) return true;
        else return false;
    }
};