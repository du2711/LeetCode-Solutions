class Solution {
public:
    int count(int n){
        int count=0;
        while(n>0){
            n=n&(n-1);
            count++;
        }
        return count;
    }
    vector<int> countBits(int n) {
        vector<int> arr(n+1);
        for(int i=0;i<=n;i++){
            arr[i]=count(i);
        }
        return arr;
    }
};