#include <bits/stdc++.h>
#include<stdio.h>
#include<math.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    // static bool cmp(pair<int,int> a, pair<int,int> b){
    //     return a.second>b.second;
    // }
    // vector<int> topKFrequent(vector<int>& nums, int k) {
    //     map<int,int> m;
    //     for(int i=0;i<nums.size();i++){
    //         if(m.find(nums[i])==m.end()){
    //             m[nums[i]]=1;
    //         }
    //         else m[nums[i]]++;
    //     }
    //     vector<pair<int,int>> v;
    //     for(auto x:m){
    //         v.push_back(x);
    //     }
    //     sort(v.begin(),v.end(),cmp);
    //     vector<int> ans;
    //     for(int i=0;i<k;i++){
    //         ans.push_back(v[i].first);
    //     }
    //     for(auto x:ans){
    //         cout<<x<<" ";
    //     }
    //     return ans;

    // }


    int minDiff(int arr[], int N, int K)
    {
        sort(arr,arr+N);
        // if(N==K) return arr[N-1]-arr[0];
        int mini=INT_MAX;
        for(int i=0;i<N-K+1;i++){
            mini=min(arr[i+K-1]-arr[i],mini);
        }
        return mini;
    }
};

//{ Driver Code Starts.

int main()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	// int t;
	// cin>>t;
	// while(t--)
	// {
		// int n,k;
		// cin>>n>>k;
		// int a[2]={ 1,1 };
		// for(int i=0;i<n;++i)
		// 	cin>>a[i];
		// Solution obj;
		// cout<<obj.minDiff(a,2,2)<<endl;
	// }
        // Solution obj1;
        // vector<int> nums{1,1,1,2,2,3};
        // vector<int> nums{1,1,1,2,2,3};
        // obj1.topKFrequent(nums,2);
	return 0;
}
// } Driver Code Ends