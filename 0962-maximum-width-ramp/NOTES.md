Approach
Precompute maximum values from the right:
​
​
Create an array maxright such that for each index i, maxright[i] stores the maximum value from i to the end of the array. This allows us to efficiently compare each element nums[i] with a larger or equal value to its right.
Two pointer approach:
​
​
Use two pointers l and r. Start with l = 0 and r = 0, both initially at the start of the array.
Move r to the right, and for each value of r, check if maxright[r] >= nums[l].
If the condition holds, calculate the width of the ramp and update the maximum width.
If nums[l] > maxright[r], increment l to try and find a valid ramp with a larger value of nums[l].
Return the result:
​
​
After iterating through the array, return the maximum ramp width.
Complexity
Time complexity: $$O(n)$$
​
​
Space complexity: $$O(n)$$