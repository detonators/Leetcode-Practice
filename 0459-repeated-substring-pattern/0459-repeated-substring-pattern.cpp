class Solution {
public:
    bool repeatedSubstringPattern(string s) {

        int n = s.size();
        for(int l=n/2;l>=1;l--){  

            if(n%l==0){
                int cnt = n/l;
                string pattern = s.substr(0,l);
                string x = "";

                while(cnt--){
                    x+=pattern;
                } if(x==s) return true;
            }
           
        }
         return false;
    }
};