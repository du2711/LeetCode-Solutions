class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int left=0,top=0;
        int right=n-1,bottom=n-1;

        int val=1;

        vector<vector<int>> res(n,vector<int>(n));

        while(left<=right && top<=bottom){
            for(int i=left;i<=right;i++){
                res[top][i]=val++;
            }
            top++;
            for(int i=top;i<=bottom;i++){
                res[i][right]=val++;
            }
            right--;
            if(left<=right){
                for(int i=right;i>=left;i--){
                    res[bottom][i]=val++;
                }
                bottom--;
            }
            if(top<=bottom){
                for(int i=bottom;i>=top;i--){
                    res[i][left]=val++;
                }
                left++;
            }
        }

        return res;
    }
};