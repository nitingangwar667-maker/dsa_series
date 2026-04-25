// moore's algorithm
#include <iostream>
#include <vector>
using namespace std;

int majorityElement(vector<int>& nums) {
    int ans = 0;
    int count = 0;
    
    for (int num : nums) {
        if (count == 0) {
            ans = num;
        }
        if (num == ans) {
            count++;
        } else {
            count--;
        }
    }
    
    return ans;
}

int main() {
    vector<int> nums = {1,2,1,2,1,2,1};
    cout << "Majority Element: " << majorityElement(nums) << endl;
    return 0;
}