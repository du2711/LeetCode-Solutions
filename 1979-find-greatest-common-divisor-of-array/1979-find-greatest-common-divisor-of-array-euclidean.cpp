class Solution {
public:
    int findGCD(vector<int>& nums) {
        int min=nums[0],max=nums[0];
        for(int i=1;i<nums.size();i++){
            if(max<nums[i]) max=nums[i];
        }
        for(int i=1;i<nums.size();i++){
            if(min>nums[i]) min=nums[i];
        }

        while(min!=0){
            int rem=max%min;
            max=min;
            min=rem;
        }
        return max;
    }
};