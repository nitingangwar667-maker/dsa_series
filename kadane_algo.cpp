#include <climits>
#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> nums = {1, -1, 3, 4, -8, 4};
    int curSum = 0;
    int bestSum = INT_MIN;
    for (int value : nums) {
        curSum += value;
        bestSum = max(bestSum, curSum);
        if (curSum < 0) {
            curSum = 0;
        }
    }
    cout << "Max subarray sum: " << bestSum << endl;
}
