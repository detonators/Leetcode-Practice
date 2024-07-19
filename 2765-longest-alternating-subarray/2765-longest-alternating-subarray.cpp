class Solution {
public:
    int alternatingSubarray(vector<int>& nums) {
        int cnt = -1, sz= nums.size();
        for (int i = 1; i < sz; i++) {
            for (int j = i, l = 2; j < sz; j++, l++) {
                if (nums[j] - nums[j - 1] == pow(-1, l))
                    cnt = max(cnt, l);
                else break;
            }
        } return cnt;      
    }
};