class Solution {
public:
    string getSmallestString(string s) {
        for(int i=0; i<s.size()-1; i++){
            if(s[i+1] < s[i]  && (s[i]%2==s[i+1]%2)){
                swap(s[i],s[i+1]); break;
            }
        } return s;        
    }
};