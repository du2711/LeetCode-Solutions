class Solution {
public:
    int findPivotIndex(vector<int>& nums) {
    int low = 0, high = nums.size() - 1;
    
    while (low < high) {
        int mid = low + (high - low) / 2;
        
        if (nums[mid] > nums[high]) {
            low = mid + 1;  
        } else {
            high = mid;
        }
    }
    
    return low; 
}
    int search(vector<int>& nums, int target) {
        int piv=findPivotIndex(nums);

        int low=0,high=piv-1;
        while(low<=high){
            int mid=low+(high-low)/2;

            if(nums[mid]==target) return mid;
            else if(nums[mid]<target) low=mid+1;
            else high=mid-1;
        }

        low=piv,high=nums.size()-1;
        while(low<=high){
            int mid=low+(high-low)/2;

            if(nums[mid]==target) return mid;
            else if(nums[mid]<target) low=mid+1;
            else high=mid-1;
        }
        return -1;
    }
};