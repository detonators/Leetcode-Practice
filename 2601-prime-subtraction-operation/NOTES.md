class Solution {
public:
// Generate prime numbers up to 1000
vector<int> generatePrimes(int limit) {
vector<int> primes;
vector<bool> is_prime(limit + 1, true);
is_prime[0] = is_prime[1] = false;
for (int i = 2; i <= limit; ++i) {
if (is_prime[i]) {
primes.push_back(i);
for (int j = i * 2; j <= limit; j += i) {
is_prime[j] = false;
}
}
}
return primes;
}
bool primeSubOperation(std::vector<int>& nums) {
vector<int> primes = generatePrimes(1000); // Generate primes up to 1000
for (int i = nums.size() - 1; i >= 1; --i) {
bool modified = false;
// Try to make nums[i] smaller than nums[i-1] by subtracting a prime
for (int prime : primes) {
if (nums[i] - prime > 0 && nums[i] - prime < nums[i-1]) {
nums[i] -= prime;
modified = true;
break;
}
}
// If no modification was possible and it's not strictly increasing
if (!modified && nums[i] <= nums[i-1]) {
return false;
}
}
return true;
}
};
​