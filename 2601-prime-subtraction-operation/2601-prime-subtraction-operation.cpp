class Solution {
public:
    vector<int> primes;
    bool primeSubOperation(vector<int>& nums) {
        primes.resize(1001, 1);
        int mx = nums[0], n = nums.size();
        for (int i = 0; i < n; i++) {
            mx = max(mx, nums[i]);
        }
        calculate_primes(mx);
        int last = nums[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            if (nums[i] < last) {
                last = nums[i];
                continue;
            }
            int prime = getSmallestPrime(nums[i] - last + 1, nums[i] - 1);
            nums[i] -= prime;
            if (nums[i] >= last)
                return false;       
            last = nums[i];
        }
        return true;
    }
    int getSmallestPrime(int mn, int mx) {
        for (int i = max(mn, 2); i <= mx; i++) {
            if (primes[i] == 1)
                return i;
        }
        return 0;
    }
    void calculate_primes(int max_n) {
        for (int i = 2; i * i <= max_n; i++) {
            if (primes[i] == 0) continue;
            for (int j = 2; j * i < max_n; j++) {
                primes[i * j] = 0;
            }
        }
    }
};