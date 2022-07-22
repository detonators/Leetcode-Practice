class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> m;
        int cnt =0, low =0, n= s.size();
        for(int i =0; i<n; i++){
            if(m.count(s[i])!=0)
                low = max(low, m[s[i]] + 1);
            m[s[i]] = i;
            cnt = max(cnt, i-low+1);
        }
        return cnt;
    }
};