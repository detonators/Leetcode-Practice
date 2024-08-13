class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.size() == 0){
            return 0;
        }
        int n=needle.size();
        int h=haystack.size();
        for (int i = 0; i <=h - n; i++) {
            int j;
            for (j = 0; j < n; j++)
                if (haystack[i + j] != needle[j])break;
 
            if (j == n) {
                return i;
            }
        }
        return -1;
    
    }
};