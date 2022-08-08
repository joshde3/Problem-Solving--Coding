#include <bits/stdc++.h>
#define ll long long
using namespace std;


class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> nums3;
        for(auto x:nums1){
            nums3.push_back(x);
        }
        int i=0,j=0;
        nums1.clear();
        while(i<m and j<n){
            if(nums3[i]>=nums2[j]){
                nums1.push_back(nums2[j]);
                j++;
                
            }
            else{
                nums1.push_back(nums3[i]);
                i++;
                
            }
        }
        while(i<m){
            nums1.push_back(nums3[i]);
            i++;
        }
        while(j<n){
            nums1.push_back(nums2[j]);
            j++;
        }
    }
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    vector<int> m={1,2,3};
    vector<int> n={2,5,6};
    Solution s;
    s.merge(m,3,n,3);
    for(auto x:m){
        cout<<x<<" ";
    }
    return 0;
}