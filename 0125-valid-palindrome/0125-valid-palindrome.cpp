class Solution {
public:
    bool isPalindrome(string s) {
        int i=0,j=s.size()-1;

        while(i<j){
            while(i<j && !isalnum(s[i])) i++;
            while(i<j && !isalnum(s[j])) j--;
            if( tolower(s[i]) == tolower(s[j]) ){
                i++;
                j--;
            }
            else{
                return false;
            }
        }
        // for(int i=0;i<s.size()/2;i++){
        //     if(tolower(s[i]) == tolower(s[s.size()-i-1]) && isalnum(s[i]) && isalnum(s[s.size()-1-i])){
        //         ans = true;
        //     }
        // }
        return true;
    }
};