class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        int one=0;

        int zeroSum=0;
        int prevZero=-1;
        int n = s.size();
        int i=0;

        while(i<n){
            int j=i;
            while(j<n && s[i]==s[j]){
                j++;
            }

            int Blen = j-i;

            if(s[i]=='1') one+=Blen;
            else {
                if(prevZero!=-1) zeroSum=max(zeroSum,prevZero+Blen);
                prevZero=Blen;
            }
            i=j;
        }
        return one+zeroSum;
    }
};