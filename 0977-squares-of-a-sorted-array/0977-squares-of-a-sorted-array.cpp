class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int left = 0;
        int right = nums.size() - 1;

        vector<int> ans(nums.size());

        int k = nums.size() - 1;

        while (left <= right) {
            int l = nums[left] * nums[left];
            int r = nums[right] * nums[right];

            if (l > r) {
                ans[k] = l;
                left++;
            }
            else {
                ans[k] = r;
                right--;
            }

            k--;
        }

        return ans;
    }
};