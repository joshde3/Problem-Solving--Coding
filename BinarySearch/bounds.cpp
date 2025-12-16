#include <bits/stdc++.h>
using namespace std;

int search(vector<int> nums, int target)
{
    int n = nums.size();
    int lo = 0, hi = n - 1;
    while (lo <= hi)
    {
        int mid = (lo + hi) / 2;
        if (nums[mid] == target)
            return mid;
        else if (nums[mid] < target)
            lo = mid + 1;
        else
            hi = mid - 1;
    }
    return -1;
}

int lowerBound(vector<int> arr, int x)
{
    int n = arr.size();
    int low = 0, high =n-1;
	int ans= n;
	while(low<=high){
		int mid = (low+high)/2;
		if(arr[mid]>=x){
			ans = mid;
			high = mid-1;
		}
		else low= mid+1;
	}
	return ans;
}

int upperBound(vector<int> arr, int x)
{
    int n = arr.size();
    int low = 0, high =n-1;
	int ans= n;
	while(low<=high){
		int mid = (low+high)/2;
		if(arr[mid]>x){
			ans = mid;
            high = mid-1;
		}
		else low= mid+1;
	}
	return ans;
}

pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
	// Write your code here.
    pair<int, int> ans;
    int low = 0, high =n-1;
	int fans= -1;
	while(low<=high){
		int mid = (low+high)/2;
		if(a[mid]<=x){
			fans = mid;
            low= mid+1;
		}
		else high = mid-1;
	}

    low = 0; high =n-1;
	int cans= -1;
	while(low<=high){
		int mid = (low+high)/2;
		if(a[mid]>=x){
			cans = mid;
            high = mid-1;
		}
		else low= mid+1;
	}
    cout<<"floor : "<<fans<<endl;
    cout<<"ceil : "<<cans<<endl;
    if(fans==-1) ans.first = -1;
    else ans.first = a[fans];

    if(cans==-1) ans.second = -1;
    else ans.second = a[cans];

    return ans;
	

}

vector<int> searchRange(vector<int>& nums, int target) {
        //first and last occurence of target element in array;
        int n = nums.size();
        int first=-1, last=-1;
        int lo = 0, hi = n-1;
        while(lo<=hi){
            int mid = lo+(hi-lo)/2;
            if(nums[mid]==target){
                first = mid;
                hi = mid-1;
            }
            else if(nums[mid]<target) lo=mid+1;
            else hi = mid-1;
        }
        lo = 0; hi = n-1;

        while(lo<=hi){
            int mid = lo+(hi-lo)/2;
            if(nums[mid]==target){
                last = mid;
                lo=mid+1;
            }
            else if(nums[mid]<target) lo=mid+1;
            else hi = mid-1;
        }

        return {first,last};
    }


int count(vector<int>& nums, int n, int target) {
	//count occurences of an element in sorted array
        // int n = nums.size();
        int first=-1, last=-1;
        int lo = 0, hi = n-1;
        while(lo<=hi){
            int mid = lo+(hi-lo)/2;
            if(nums[mid]==target){
                first = mid;
                hi = mid-1;
            }
            else if(nums[mid]<target) lo=mid+1;
            else hi = mid-1;
        }
        if(first==-1) return 0;
        lo = 0; hi = n-1;

        while(lo<=hi){
            int mid = lo+(hi-lo)/2;
            if(nums[mid]==target){
                last = mid;
                lo=mid+1;
            }
            else if(nums[mid]<target) lo=mid+1;
            else hi = mid-1;
        }


        return last-first+1;
}

int main()
{
    // int t;
    // cin>>t;
    // while(t--){
    int n;
    cin >> n;
    int k;
    cin >> k;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }
    // int ub = upperBound(arr, k);
    // int lb = lowerBound(arr, k);
    // cout<<"upper bound: "<<ub<<endl;
    // cout<<"lower bound: "<<lb<<endl;
    // pair<int,int> ans = getFloorAndCeil(arr,n,k);
    // cout<<"upper bound: "<<ans.second<<endl;
    // cout<<"lower bound: "<<ans.first<<endl;
    vector<int> res = searchRange(arr,k);
    cout<<"first and last is: "<<endl;
    for (int i : res)
        cout << i <<" ";

    // for(int i=0;i<res.size();i++){
    //     cout<<res[i]<<" ";
    // }

    return 0;
}