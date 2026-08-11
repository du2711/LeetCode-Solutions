class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int arr=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]+1) arr+=nums[i];
            else break;
        }
        while(find(nums.begin(),nums.end(),arr)!=nums.end()) arr++;
        return arr;
    }
};