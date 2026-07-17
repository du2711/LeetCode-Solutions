class Solution {
public:
    int max(int a,int b){
        if(a>b) return a;
        else return b;
    }
    int maximumWealth(vector<vector<int>>& accounts) {
        int rich=0;
        for(int i=0;i<accounts.size();i++){
            int sum=0;
            for(int j=0;j<accounts[i].size();j++){
                sum=sum+accounts[i][j];
            }
            rich = max(rich,sum);
        }

        return rich;
    }
};