class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        // int n=digits.size();
        int count=0;
        // int lastnum1 = (digits[n-3]*100)+(digits[n-2]*10)+digits[n-1];
        // int lastnum2 = (digits[n-3]*100)+(digits[n-1]*10)+digits[n-2];
        // int lastnum3 = (digits[n-2]*100)+(digits[n-3]*10)+digits[n-1];
        // int lastnum4 = (digits[n-2]*100)+(digits[n-1]*10)+digits[n-3];
        // int lastnum5 = (digits[n-1]*100)+(digits[n-2]*10)+digits[n-3];
        // int lastnum6 = (digits[n-1]*100)+(digits[n-3]*10)+digits[n-2];
        // if((lastnum1>=100 && lastnum1<=999) && lastnum1%2==0) count++;
        // if((lastnum2>=100 && lastnum2<=999) && lastnum2%2==0) count++;
        // if((lastnum3>=100 && lastnum3<=999) && lastnum3%2==0) count++;
        // if((lastnum4>=100 && lastnum4<=999) && lastnum4%2==0) count++;
        // if((lastnum5>=100 && lastnum5<=999) && lastnum5%2==0) count++;
        // if((lastnum6>=100 && lastnum6<=999) && lastnum6%2==0) count++;
  
        set<int> s;
        for(int i=0;i<digits.size();i++){
            for(int j=0;j<digits.size();j++){
                for(int k=0;k<digits.size();k++){
                    if(i==j || j==k || k==i) continue;
                    int num = (digits[i]*100)+(digits[j]*10)+(digits[k]);
                    if(num>=100 && num%2==0) s.insert(num);
                }
            }
        }
        return s.size();
    }
};