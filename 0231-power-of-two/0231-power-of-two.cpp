class Solution {
public:
    bool isPowerOfTwo(int n) {
         return n > 0 && not (n & n - 1);
        if(n%2==0) return true;
        else return false;
    }
};