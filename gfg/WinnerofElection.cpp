#include <iostream>
#include <map>
#include <algorithm>
#include <cstdlib>
#include <bits/stdc++.h>

using namespace std;


struct Myhash{
    int cap,size=0;
    Myhash(int c){
        cap=c;
    }
    int hash(int key){
        return key%cap;
    }
    bool search(int key);
    bool insert(int key);
    bool remove(int key);
};

// } Driver Code Ends
class Solution{
  public:
  
    //Function to return the name of candidate that received maximum votes.
    vector<string> winner(string arr[],int n)
    {
        // Your code here
        // Return the string containing the name and an integer
        
        // representing the number of votes the winning candidate got
        unordered_map<string,int> m;
        
        for (int i = 0; i < n; i++)
        {
            /* code */
            m[arr[i]]++;
        }
        vector<string> m1;
        int maxi=0;
        string winner;
        for(auto x:m){
            
            if(maxi<x.second){
                maxi=x.second;
                winner=x.first;
            }
            else if(x.second==maxi and x.first<winner){
                winner=x.first;
            }
        }
        m1.push_back(winner);
        m1.push_back(to_string(maxi));

        return m1;
    }
};

//{ Driver Code Starts.

int main()
{
    // int t;
    // cin>>t;
    
    // for(int i=0;i<t;i++)
    // {
        // int n;
        // cin>>n;
        
        string arr[13]={"john","johnny","jackie","johnny","john", "jackie","jamie","jamie","john","johnny","jamie","johnny","john"};
        
        // for (int i=0;i<n;i++)
        // cin>>arr[i];
        Solution obj;
        vector<string> result = obj.winner(arr,13);
        
        cout<<result[0] << " " << result[1] << endl;
    // }
    return 0;
}

// } Driver Code Ends
