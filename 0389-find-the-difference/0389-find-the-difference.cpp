class Solution {
public:
    char findTheDifference(string s, string t) {
        char n = 0;
        for(int i = 0;i<s.size();i++){
            n=n^s[i];
        }
        for(int i= 0;i<t.size();i++){
            n=n^t[i];
        }
        return n;
    }
};