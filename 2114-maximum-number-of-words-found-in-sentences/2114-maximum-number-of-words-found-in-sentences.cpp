class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int ans =0;
        for(string str : sentences){
            int count=1;
            for(char ch : str){
                if(ch == ' ') count++;
            }
            ans = max(ans,count);
        }
        return ans;
    }
};