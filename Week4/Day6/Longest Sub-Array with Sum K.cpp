//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int lenOfLongestSubarr(vector<int>& arr, int k) {
        long long i=0,j=0,sz=arr.size(),sum=0,ans=0;
        map<long long,int> mp;
        while(j<sz){
            sum+=arr[j];
            j++;
             if(sum==k){
                ans = max(ans,j);
            }
            if(mp.find(sum)==mp.end()) mp[sum]=j;
            long long x = sum-k;
            if(mp.find(x)!=mp.end()){
                ans = max(ans,j-mp[x]);
            }
           
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore newline character after t

    while (t--) {
        vector<int> arr;
        int k;
        string inputLine;

        getline(cin, inputLine); // Read the array input as a line
        stringstream ss(inputLine);
        int value;
        while (ss >> value) {
            arr.push_back(value);
        }

        cin >> k;
        cin.ignore(); // Ignore newline character after k input

        Solution solution;
        cout << solution.lenOfLongestSubarr(arr, k) << "\n";
        cout << "~\n";
    }

    return 0;
}

// } Driver Code Ends