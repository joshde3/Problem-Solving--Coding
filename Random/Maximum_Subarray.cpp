#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int arraySum(vector<int> arr){
        int initial_sum=0;
        return accumulate(arr.begin(),arr.end(),initial_sum);
    }
    int maxSubArray(vector<int>& nums) {
        int max_sum=0;
        vector<int> check(0);
        for(int i=0;i<nums.size();i++){
            for(int j=i;j<nums.size();j++){
                int sum=0;
                for (int k=i;k<=j;k++){
                    sum+=nums[k];
                }
                if(max_sum<sum){
                    max_sum=arraySum(check);
                }
                check.clear();
            }
        }
        return max_sum;
    }
    
};

int main(){
    Solution s;
    vector<int> nums={-1};
    int sum2=s.maxSubArray(nums);
    cout<<sum2;
    return 0;
}