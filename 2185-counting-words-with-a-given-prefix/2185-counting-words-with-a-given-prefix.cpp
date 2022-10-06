class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        
        int cnt =0;
        for(auto s : words){
            auto found =s.find(pref);
            if(found!= string :: npos && found==0)
            cnt++;
        }
        return cnt;
    }
};