#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) return 0;
        if (nums[0] > nums[1]) return 0;
        if (nums[n - 1] > nums[n - 2]) return n - 1;
        int st = 1, end = n - 2;
        while (st <= end) {
            int mid = st + (end - st) / 2;
            if (nums[mid] > nums[mid - 1] && nums[mid] > nums[mid + 1]) {
                return mid;
            }
            else if (nums[mid] < nums[mid + 1]) {
                st = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }
        return -1;
    }
};
int main() {
    Solution solution;
    vector<int> nums = {1, 2, 3, 1};
    int result = solution.findPeakElement(nums);
    cout << "Peak element found at index: " << result << endl;
    return 0;
}