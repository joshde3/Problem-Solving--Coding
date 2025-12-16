#include<bits/stdc++.h>
using namespace std;


vector<int> rearrangeArray(vector<int>& arr) {

    // vector<int> posVec;
    // vector<int> negVec;
    // for(int x:arr){
    //     if(x<0) negVec.push_back(x);
    //     else posVec.push_back(x);
    // }
    // vector<int> ans(arr.size());

    // // for(int i:posVec) cout<<i<<" ";
    // // for(int i:negVec) cout<<i<<" ";
    // int j =0;
    // int k =1;
    // for(int i=0;i<arr.size();i++){
    //     if (arr[i]>0){
    //         ans[j] =arr[i];
    //         j+=2;
    //     }
    //     else if(arr[i]<0){
    //         ans[k] =arr[i];
    //         k+=2;
    //     }
    // }
    // return ans;

    vector<int> posVec;
        vector<int> negVec;
        for (int x : arr) {
            if (x < 0)
                negVec.push_back(x);
            else
                posVec.push_back(x);
        }
        vector<int> ans(arr.size());

        // for(int i:posVec) cout<<i<<" ";
        // for(int i:negVec) cout<<i<<" ";
        int len = min(posVec.size(),negVec.size());
        for (int i = 0; i < len; i++) {
            ans[2 * i] = posVec[i];
            ans[2 * i + 1] = negVec[i];    
        }
        // int index = len*2;
		if(posVec.size()>negVec.size()){
            int index = len*2;
			for(int i = negVec.size();i<posVec.size();i++){
				ans[index]=posVec[i];
                index++;
			}
		}
        else{
            int index = len*2;
			for(int i = negVec.size();i<negVec.size();i++){
				ans[index]=negVec[i];
                index++;
			}

        }
        return ans;

        
}

int main() {
    // int t;
    // cin>>t;
    // while(t--){
        int n;
        cin >> n;
        // int k;
        // cin>>k;
        vector<int> arr;
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            arr.push_back(temp);
        }
        vector<int> ans = rearrangeArray(arr);
        // cout<<"max profit is "<<endl<<rearrangeArray(arr);
        for(int i:ans) cout<<i<<" ";

    // }
    
    // for(int i=0;i<res.size();i++){
    //     cout<<res[i]<<" ";
    // }
    
    
    return 0;
}