class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n=nums.size();
        int neg=0,pos=0;

        int low=0,high=nums.size()-1;

        while(low<=high){
            int mid=low+(high-low)/2;

            if(nums[mid]<0 ){
                neg=mid+1;
                low=mid+1;
            }
            else high=mid-1;
        }

        low=0,high=nums.size()-1;
        while(low<=high){
            int mid=low+(high-low)/2;

            if(nums[mid]>0 ){
                pos=n-mid;
                high=mid-1;
            }
            else low=mid+1;
        }
        return max(neg,pos);
    }
};