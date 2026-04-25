#include <iostream>
#include <vector>
using namespace std;
vector<int>twosum(vector<int>&nums,int target)
{
    //when array is sorted
    int left=0;
    int right=nums.size()-1;
    while(left<right){
        int sum = nums[left]+nums[right];
        if (sum==target){
            return {left,right};
        }
        if (sum<target){
            left++;
        }
        else{
            right--;
        }
    }
    return {};
}
int main()
{
    vector<int> nums={2,7,11,15};
    int target=22;
    vector<int> result = twosum(nums, target);
    cout<<"Indices: "<<result[0]<<" and "<<result[1]<<endl;
}