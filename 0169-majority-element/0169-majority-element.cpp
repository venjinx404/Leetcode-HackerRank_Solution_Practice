class Solution {
public:
    int majorityElement(vector<int>& nums) {
         sort(nums.begin(), nums.end());
         int mid=((nums.size() -1)-0)/2;

return nums[mid];
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna