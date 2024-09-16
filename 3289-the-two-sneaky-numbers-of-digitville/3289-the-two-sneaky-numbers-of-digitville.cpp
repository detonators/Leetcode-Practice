class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        sort(nums.begin(), nums.end()); // Sort the numbers
        vector<int> ans; // To store the "sneaky numbers" (duplicates)
        
        for (int i = 1; i < nums.size(); i++) { // Start from index 1
            if (nums[i] == nums[i - 1]) { // Check if current number is the same as the previous one
                if (ans.empty() || ans.back() != nums[i]) { // Avoid inserting the same number twice
                    ans.push_back(nums[i]); // Add to result
                }
            }
        }
        return ans; // Return the vector containing sneaky numbers
    }
};
