#include <iostream>
#include <vector>

using namespace std;
int maxProfit(vector<int>& prices) {
    int b1 = INT_MIN , b2 = INT_MIN;
    int s1 = 0 , s2 = 0;
    for (int v : prices) {
        b1 = max(b1 , -v);
        s1 = max(s1 , b1 + v);
        b2 = max(b2 , s1 - v);
        s2 = max(s2 , b2 + v);
    } return s2;
};
int main(){
    vector<int> prices = {2,1,3,0,1};
    cout << "Max profit "<<maxProfit(prices)<<endl;
}