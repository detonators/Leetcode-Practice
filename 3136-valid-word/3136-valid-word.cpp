class Solution {
public:
    bool isValid(string word) {
         if (word.size() < 3) return 0;
        
        bool v =0, cn =0, extra = 1;
        for (char c : word) {
            if (!isalnum(c)) return 0;
            
            if (isalpha(c)) {
                if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
                    c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')  v = 1;
                else cn = 1;
            }
        } return v && cn;
    }
};