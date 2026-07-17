class Solution {
public:
    int max(vector<int> &arr,int s){
        int max=0;
        for(int i=s;i<arr.size();i++){
            if(arr[i]>max) max=arr[i];
        }
        return max;
    }
    vector<int> replaceElements(vector<int>& arr) {
        vector<int> brr;
        int i=1;
        while(i<arr.size()){
           int res = max(arr,i);
           brr.push_back(res) ;
           i++;
        }
        brr.push_back(-1);
        return brr;
    }
};