class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int n=1;
        while(true){
            int present=k*n;
            bool found=false;
            for(int i=0;i<nums.size();i++){
                if(present==nums[i]){ 
                    found=true;
                    break;
                }
            }
            if(!found) return present;
            n++;
        }
        return k;
    }
};