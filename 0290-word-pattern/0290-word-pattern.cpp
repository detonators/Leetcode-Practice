class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> nums;
        int l=0;
        for(int i=0;i<s.length();i++){
            if(i == s.length()-1){
                nums.push_back(s.substr(l, i - l+1));
                l = i+1;
            }
            if(s[i] == ' '){
                nums.push_back(s.substr(l, i - l));
                l = i+1;
            }
        }

        int n=nums.size();
        if(n != pattern.length())
        return false;

        map<string,char> m2;

        map<char,string> m;
        for(int i=0;i<n;i++){
            if(m.find(pattern[i]) == m.end() && m2.find(nums[i]) == m2.end()){
                m[pattern[i]] = nums[i];
                m2[nums[i]] = pattern[i];
            }else{
                if(m[pattern[i]] != nums[i])
                return false;
            }
        }

        return true;
    }
};