int max(int a,int b){
    return a>b?a:b;
}
int maxSubArray(int* nums, int numsSize) {
    int curSum=0,maxSum=INT_MIN;
    for(int i=0;i<numsSize;i++){
        curSum+=nums[i];
        maxSum=max(curSum,maxSum);
        if(curSum<0) curSum=0;
    }
    return maxSum;
}