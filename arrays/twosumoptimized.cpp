#include <vector>
#include <iostream>
#include <map>
using namespace std;

class Solution {
public:
    vector<int> twosum(vector<int>& nums, int target) {
        int n = nums.size();
        map<int, int> mp;

        for (int i = 0; i < n; i++) {
            int remaining = target - nums[i];
            if (mp.find(remaining) != mp.end()) {
                return { mp[remaining], i };
            }
            mp[nums[i]] = i;
        }
        return {};
    }
};

int main() {
    Solution sol;
    int arr[] = {2, 7, 11, 15};
    vector<int> nums(arr, arr + sizeof(arr) / sizeof(arr[0])); // Convert array to vector

    vector<int> result = sol.twosum(nums, 9);

    if (result.size() == 2) {
        cout << "Indices are: " << result[0] << " " << result[1] << endl;
    } else {
        cout << "No valid indices found." << endl;
    }

    return 0;
}
