class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        for(int i=1;i<gain.size();i++){
            gain[i]=gain[i]+gain[i-1];
        }

        int max=gain[0];
        for(int i=0;i<gain.size();i++){
            if(max<gain[i]) max=gain[i];
        }
        if(max<0) return 0;
        else return max;
    }
};