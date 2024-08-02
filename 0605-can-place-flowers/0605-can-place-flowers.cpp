class Solution {
public:
    bool canPlaceFlowers(vector<int>& fb, int n) {
        for (int i = 0; i < fb.size(); i++) {
            bool left= i == 0 || fb[i-1] == 0;
            bool right= i == fb.size()-1 || fb[i+1] == 0;
            
            if (left && right && fb[i] == 0) {
                fb[i] = 1;
                n--;
            }
        }
        return n <= 0;        
        
    }
};