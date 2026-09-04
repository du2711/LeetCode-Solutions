class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        for(int i=0;i<nums.size();i++){
            int maxleft=nums[0];
            int minright=nums[nums.size()-1];

            for(int j=0;j<=i;j++){
                maxleft=max(maxleft,nums[j]);
            }
            for(int j=i;j<nums.size();j++){
                minright=min(minright,nums[j]);
            }

            if(maxleft-minright<=k) return i;
        }
        return -1;
    }
};