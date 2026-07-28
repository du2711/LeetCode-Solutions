class Solution {
public:
    string smallestPalindrome(string s) {
        int n=s.size();
        int f[26]={};
        for(int i=0;i<n/2;i++){
            f[s[i]-'a']++;
        }
        int idx=0;
        for(int c=0;c<26;c++){
            while(f[c]--){
                s[idx++]=char(c+'a');
            }
        }
        for(int i=0;i<n/2;i++){
            s[n-1-i]=s[i];
        }
        return s;
    }
};