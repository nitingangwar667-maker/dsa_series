#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    double myPow(double x, long n) {
        if (n==0) return 1.0;
        if (x==0) return 0.0;
        if (x==1) return 1.0;
        if (x==-1 && n%2==0) return 1.0;
        if (x==-1 && n%2!=0) return -1.0;
        if (n<0){
            x=1/x;
            n=-n;
        }
        double ans=1;
        while(n>0){
            if (n%2==1){
                ans*=x;
            }
            x*=x;
            n/=2;    
        }
        return ans;
    }
};

int main(){
    Solution sol;
    double x = 2.0;
    long n = 10;
    cout << "Result: " << sol.myPow(x, n) << endl;
}