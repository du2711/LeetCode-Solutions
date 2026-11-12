class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n=nums.size();
        int maxi=1;
        int incCur=1;
        int decCur=1;
        for(int i=0;i<n-1;i++){
            if(nums[i]<nums[i+1]){
                incCur++;
                decCur=1;
            }
            else if(nums[i]>nums[i+1]){ 
                decCur++;
                incCur=1;
            }
            else{
                decCur=1;
                incCur=1;
            }

            maxi=max(maxi,max(decCur,incCur));
        }
        return maxi;
    }
};