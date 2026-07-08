class Solution {
public:
    void subset(vector<int> &arr,int i,vector<int> &j,vector<vector<int>> &res){
        if(arr.size()==i){
            res.push_back(j);
            return;
        }
        j.push_back(arr[i]);
        subset(arr,i+1,j,res);
        j.pop_back();
        subset(arr,i+1,j,res);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> temp;
        subset(nums,0,temp,result);

        return result;

    }
};