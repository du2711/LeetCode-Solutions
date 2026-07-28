class Solution {
public:
    // bool palindrome(string s){
    //     for(int i=0;i<s.size()/2;i++){
    //         if(s[i]==)
    //     }
    // }
    string smallestPalindrome(string s) {
        int n=s.size();
        if(n<2) return s;
        sort(s.begin(),s.begin()+n/2);
        for(int i=0;i<n/2;i++){
            s[n-1-i]=s[i];
        }
        return s;
    }
};