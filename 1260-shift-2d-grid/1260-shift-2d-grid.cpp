class Solution {
public:
    void swap(int &a,int &b){
        int temp=a;
        a=b;
        b=temp;
    }
    void reverse(vector<vector<int>> &arr,int start,int end){
        int m = arr.size();
        int n = arr[0].size();

        while(start<end) {
            int startRow = start / n;
            int startCol = start % n;
            int endRow = end / n;
            int endCol = end % n;

            swap(arr[startRow][startCol],arr[endRow][endCol]);
            start++;
            end--;
        }
    }
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m=grid.size();
        int n=grid[0].size();

        k=k%(m*n);
        if(k==0) return grid;
        
        reverse(grid,0,m*n-1);
        reverse(grid,0,k-1);
        reverse(grid,k,m*n-1);
        return grid;
    }
};