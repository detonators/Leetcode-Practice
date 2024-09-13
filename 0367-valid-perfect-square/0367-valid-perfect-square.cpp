class Solution {
public:
    bool isPerfectSquare(int num) {
        double fn = sqrt(num);
        return fn - int(fn) == 0 ;
        
    }
};