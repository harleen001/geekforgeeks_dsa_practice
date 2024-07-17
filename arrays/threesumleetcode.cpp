class Solution {
public:
    vector<vector<int>> result;

    void twoSum(vector<int>& nums, int target, int i, int j) {
        while (i < j) {
            if (nums[i] + nums[j] > target) {
                j--;
            } else if (nums[i] + nums[j] < target) {
                i++;
            } else {
                // Store the triplet {n1, nums[i], nums[j]}
                result.push_back({-target, nums[i], nums[j]});
                // Remove duplicates from both ends
                while (i < j && nums[i] == nums[i + 1]) i++;
                while (i < j && nums[j] == nums[j - 1]) j--;
                // Move both pointers inward
                i++;
                j--;
            }
        }
    }

    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        if (n < 3) {
            return {};
        }

        result.clear();
        // Sort the input array
        sort(nums.begin(), nums.end());

        // Fix one element (n1)
        for (int i = 0; i < n - 2; i++) {
            // Skip duplicates
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }
            int n1 = nums[i];
            int target = -n1;
            // Find two elements (n2, n3) that sum up to -n1
            twoSum(nums, target, i + 1, n - 1);
        }

        return result;
    }
};
