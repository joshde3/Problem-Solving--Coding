// //{ Driver Code Starts
// //Initial Template for C++

// #include <bits/stdc++.h>
// using namespace std;
// #define RANGE 255


// // } Driver Code Ends
// //User function Template for C++

// class Solution{
//     public:
//     //Function to arrange all letters of a string in lexicographical 
//     //order using Counting Sort.
//     string countSort(string arr){
//         // code here
//         int arra[26]={0};
//         string result="";
//         int n=arr.length();
//         for(int i=0;i<n;i++){
//             int c = arr[i] - 97;
//             arra[c]++;
//         }
//         for(int j=0;j<26;j++){
//             if(arra[j]==0) continue;
//             char c = j+97;
//             int times=arra[j];
//             while(times--){
//                 result+=c;
//             }
//         }
//         return result;
//     }
// };


// //{ Driver Code Starts.

// int main()
// {
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         // int n;
//         // cin>>n;
//         // string arr;
//         // cin>>arr;
//         // Solution obj;
//         // cout<<obj.countSort(arr)<<endl;


//     }
//     return 0;
// }


//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:   
        bool mycmp(pair<int,int> A, pair<int,int> B){
            return A.first<B.first;
        } 
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            //code here.
            vector<int> cnt;
            unordered_map<int, int> m;
            for(int i=0;i<n1;i++ ){
                m[A[i]]++;
            }
            for(int j=0;j<n2;j++ ){
                m[B[j]]++;        
            }
            for(int k=0;k<n3;k++ ){
                m[C[k]]++;      
            }
            // sort(m.begin(),m.end(),mycmp);
                for(auto x:m){
                if(x.second>=3){
                    cnt.push_back(x.first);
                }
            }
            sort(cnt.begin(),cnt.end());
            return cnt;
            
        }

};

//{ Driver Code Starts.

int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n1, n2, n3; 
        cin >> n1 >> n2 >> n3;
        int A[n1];
        int B[n2];
        int C[n3];
        
        for (int i = 0; i < n1; i++) cin >> A[i];
        for (int i = 0; i < n2; i++) cin >> B[i];
        for (int i = 0; i < n3; i++) cin >> C[i];
        
        Solution ob;
        
        vector <int> res = ob.commonElements (A, B, C, n1, n2, n3);
        if (res.size () == 0) 
            cout << -1;
        for (int i = 0; i < res.size (); i++) 
            cout << res[i] << " "; 
        cout << endl;
    }
}
// } Driver Code Ends
// } Driver Code Ends