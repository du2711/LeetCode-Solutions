class Solution {
public:
    void comb(string &str,int idx,string result,vector<string> &v,vector<string> &data){
        if(idx==str.size()){
            v.push_back(result);
            return;
        }
        int digit=str[idx]-'0';
        if(digit<=1){
            comb(str,idx+1,result,v,data);
            return;
        }
        for(int i=0;i<data[digit].size();i++){
            comb(str,idx+1,result+data[digit][i],v,data);
        }
        return;
    }
    vector<string> letterCombinations(string digits) {
        vector<string> d = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        vector<string> v;

        if(digits.empty()) return {};
        comb(digits,0,"",v,d);

        return v;
    }
};