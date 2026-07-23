class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        if(nums.empty()) return 0;

        int n=nums.size();
        sort(nums.begin(),nums.end());

        vector<int> new_nums;
        new_nums.push_back(nums[0]);
        for(int i=1;i<n;i++){
            if(nums[i]!=nums[i-1]) {
                new_nums.push_back(nums[i]);
            }
        }

        int m=new_nums.size();
        bool pairxor[16384]={false};
        
        for(int i=0;i<m;i++){
            for(int j=i;j<m;j++){
                pairxor[new_nums[i]^new_nums[j]]=true;
            }
        }

        vector<int> validpair;
        for(int i=0;i<16384;i++){
            if(pairxor[i]==true) validpair.push_back(i);
        } 
        bool present[16384]={false};
        for(int i:validpair){
            for(int j=0;j<m;j++){
                present[i^new_nums[j]]=true;
            }
        }

        int count=0;
        for(int i=0;i<16384;i++){
            if(present[i]==true) count++;
        }
        return count;
    }
};