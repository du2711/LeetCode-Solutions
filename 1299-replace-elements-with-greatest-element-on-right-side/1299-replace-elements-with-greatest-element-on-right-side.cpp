class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int ele=-1;
        for(int i=arr.size()-1;i>=0;i--){
            int temp=arr[i];
            arr[i]=ele;
            ele=max(temp,ele);
        }
        return arr;
    }
};