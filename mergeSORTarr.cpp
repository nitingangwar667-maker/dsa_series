#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int idx=m+n-1 , i=m-1 , j=n-1;
        if (m==0){
            nums1[idx]=nums2[j];
        }
        while (i>=0 && j>=0){
            if (nums1[i]>=nums2[j]){
                nums1[idx]=nums1[i];
                idx--;
                i--;
            }
            else{
                nums1[idx]=nums2[j];
                j--;
                idx--;
            }
        }
        while (j >= 0) {
            nums1[idx--] = nums2[j--];
        }
        
    }
};
int main() {
    Solution sol;
    vector<int> nums1 = {1, 2, 3, 0, 0, 0}; // m = 3
    vector<int> nums2 = {2, 5, 6};          // n = 3
    int m = 3, n = 3;

    sol.merge(nums1, m, nums2, n);

    cout << "Merged array: ";
    for (int num : nums1) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}