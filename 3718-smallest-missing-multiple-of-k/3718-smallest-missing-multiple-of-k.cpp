class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        vector<bool> present (101,false);

        for(int i:nums){
            present[i]=true;
        }

        int val = k;
        while(val<=100){
            if(!present[val]) return val;
            val+=k; 
        }

        return val;
    }
};