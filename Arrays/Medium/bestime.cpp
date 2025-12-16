#include<bits/stdc++.h>
using namespace std;


int maxProfit(vector<int>& prices) {
    int profit=0, curr_profit=0,mini=prices[0];
    for(int i=1;i<prices.size();i++){
        curr_profit = prices[i] - mini;
        profit = max(profit, curr_profit);
        mini = min(mini, prices[i]);
    }
    return profit;

        
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
        cout<<"max profit is "<<endl<<maxProfit(arr);
        // for(int i:arr) cout<<i<<" ";

    // }
    
    // for(int i=0;i<res.size();i++){
    //     cout<<res[i]<<" ";
    // }
    
    
    return 0;
}