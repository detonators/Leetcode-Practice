class Solution {
public:
    int countElements(vector<int>& nums, int k) {

        int n=nums.size();
        if(k==0) return n;

        sort(nums.begin(),nums.end());

        int i=max(0,n-k);
        while(i>0 and nums[i]==nums[i-1]) i--;

        return i;
    }
};