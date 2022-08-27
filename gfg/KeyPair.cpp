#include <bits/stdc++.h>

using namespace std;

// } Driver ode Ends
//User function template for C++
class Solution{
public:	
	// Function to check if array has 2 elements
	// whose sum is equal to the given value
	bool hasArrayTwoCandidates(int arr[], int n, int x) {
	    // code here
	    // for(int i=0;i<n;i++){
	    //     for(int j=i+1;j<n;j++){
	    //         if((arr[i]+arr[j])==x){
	    //             return true;
	    //         }
	    //     }
	    // }
	    // return false;
        unordered_set<int> s;
        for (int i = 0; i < n; i++)
        {
            int temp=x-arr[i];
            if(s.find(temp)!=s.end()){
                return true;
            }
            s.insert(arr[i]);
        }
        return false;
        
	}
};

//{ Driver Code Starts.

int main() {
    // int t;
    // cin >> t;
    // while (t--) {
        // int n, x;
        // cin >> n >> x;
        int arr[74] ={142 ,712 ,254 ,869 ,548 ,645 ,663 ,758 ,38 ,860 ,724 ,742 ,530 ,779 ,317 ,36 ,191 ,843 ,289 ,107 ,41 ,943 ,265 ,649 ,447 ,806 ,891 ,730 ,371 ,351 ,7 ,102 ,394 ,549 ,630 ,624 ,85 ,955 ,757 ,841 ,967 ,377 ,932 ,309 ,945 ,440 ,627 ,324 ,538 ,539 ,119 ,83 ,930 ,542 ,834 ,116 ,640 ,659, 705 ,931 ,978 ,307 ,674 ,387 ,22 ,746 ,925 ,73, 271 ,830 ,778 ,574 ,98 ,513};
        // for (int i = 0; i < n; i++) {
        //     cin >> arr[i];
        // }
        Solution ob;
        auto ans = ob.hasArrayTwoCandidates(arr, 74, 165);
        cout << (ans ? "Yes\n" : "No\n");
    // }
    return 0;
}

// } Driver Code Ends