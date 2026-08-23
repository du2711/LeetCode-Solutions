class Solution {
public:
    bool sumGame(string num) {
        int leftque=0,rightque=0;
        int leftsum=0,rightsum=0;
        for(int i=0;i<num.size()/2;i++){
            if(num[i]=='?') leftque++;
            else leftsum+= num[i]-'0';
        }
        for(int i=num.size()/2;i<num.size();i++){
            if(num[i]=='?') rightque++;
            else rightsum+= num[i]-'0';
        }
        
        int diff=leftsum-rightsum;
        int quediff=leftque-rightque;

        return diff*2 + quediff*9 != 0;
    }
};