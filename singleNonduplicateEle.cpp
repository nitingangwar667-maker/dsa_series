#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int singleNonDuplicate(vector<int>& a) {
        int n=a.size() ;
        int st = 0 , end = n-1;
        if (n==1) return a[0];
        if (a[0] != a[1]) return a[0];
        if (a[n-1] != a[n-2]) return a[n-1];
        while(st <=end){
            int m=st+(end-st)/2;
            if (a[m]!=a[m-1] && a[m]!=a[m+1]) return a[m];
            if (m%2==0){
                if (a[m] == a[m-1]){
                    end=m-1;
                }
                else{
                    st=m+1;
                }
            }
            else{
                if (a[m] == a[m-1]){
                    st = m+1;
                }
                else{
                    end=m-1;
                }
            }
        }
        return -1;
    }
};



int main() {
    Solution solution;
    vector<int> nums = {1, 1, 2, 3, 3, 4, 4, 8, 8};
    int result = solution.singleNonDuplicate(nums);
    cout << "Single non-duplicate element: " << result << endl;
    return 0;
}