class Solution {
public:
    string getEncryptedString(string s, int k) {
        string cnt;
        for(int i=0; i<s.size(); i++){
            cnt.push_back(s[(i+k)%s.size()]);
        }
        return cnt;
    }
};