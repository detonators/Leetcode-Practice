class Solution {
public:
    int myAtoi(string str) {
        if(str.empty()) return 0;
        long long cnt = 0;
            istringstream ss(str);
        ss>>cnt;
            cnt= cnt > INT_MAX ? INT_MAX:cnt;
            cnt= cnt < INT_MIN ? INT_MIN:cnt;
        
        return cnt;
    
    }
};

