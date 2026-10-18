class Solution {
public:
    bool isPal(const string &s, int left, int right ){
        while(left<right){
            if(s[left]!=s[right]) return false;
            left++;
            right--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int left=0,right=s.size()-1;
        while(left<right){
            if(s[left]!=s[right]) return isPal(s,left,right-1) || isPal(s,left+1,right);
            left++;
            right--;
        }
        return true;
    }
};