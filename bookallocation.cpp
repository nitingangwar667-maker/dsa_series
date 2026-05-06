#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool isvalid(vector<int>& arr, int n, int m, int mxallow) {
        int s = 1, pages = 0;
        
        for (int i = 0; i < n; i++) {
            if (arr[i] > mxallow) {
                return false;
            }
            
            if (pages + arr[i] <= mxallow) {
                pages += arr[i];
            } else {
                s++;
                pages = arr[i];
            }
        }

        return s <= m; 
    }

    int splitArray(vector<int>& arr, int m) {
        int n = arr.size();
        
        if (m > n) {
            return -1; 
        }
        
        int sum = 0;
        int max_val = 0;
        
        for (int i = 0; i < n; i++) {
            sum += arr[i];
            max_val = max(max_val, arr[i]);
        }
        
        int st = max_val; 
        int end = sum;
        int ans = -1;
        
        while (st <= end) {
            int mid = st + (end - st) / 2;
            
            if (isvalid(arr, n, m, mid)) {
                ans = mid;
                end = mid - 1;
            } else {
                st = mid + 1;
            }
        }
        
        return ans;
    }
};
int main() {
    Solution sol;
    vector<int> arr = {1,2,3,4,5};
    int m = 2;
    
    int result = sol.splitArray(arr, m);
    cout << "Minimum largest sum: " << result << endl;
    
    return 0;
}