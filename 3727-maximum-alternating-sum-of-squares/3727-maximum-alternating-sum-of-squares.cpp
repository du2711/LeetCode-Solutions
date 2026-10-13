class Solution {
public:
    long long square(long long a) {return a*a;}
    long long maxAlternatingSum(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            nums[i]=abs(nums[i]);
        }
        sort(nums.begin(),nums.end());
        long long score=0;
        for(int i=0;i<nums.size();i++){
            if(i<nums.size()/2){
                score-=square(nums[i]);
            }
            else{
                score+=square(nums[i]);
            }
        }
        return score;
    }
};