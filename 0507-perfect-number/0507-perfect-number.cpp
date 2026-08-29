class Solution {
public:
    bool checkPerfectNumber(int num) {
        vector<int> lcms;
        for(int i=1;i<num;i++){
            if(num%i==0) lcms.push_back(i);
        }
        int sum=0;
        for(int i=0;i<lcms.size();i++){
            sum+=lcms[i];
        }
        return num==sum;
    }
};