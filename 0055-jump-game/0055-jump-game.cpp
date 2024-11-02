class Solution {
public:
    bool canJump(vector<int>& nums) {
        int jump = 0;
        int cnt = nums.size() - 1;

        for (int i = 0; i < nums.size(); i++) {
            if (jump < i) return 0;
            jump = max(jump, i + nums[i]);


            if (jump >= cnt) return 1;
        }
        return jump >= cnt;
    }
};