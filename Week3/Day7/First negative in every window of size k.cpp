//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    vector<int> FirstNegativeInteger(vector<int>& arr, int k) {
        queue<int> q;
        for(int i=0;i<k;i++){
            if(arr[i]<0) q.push(arr[i]);
        }
        vector<int> v(arr.size()-k+1,0);
        if(!q.empty()) v[0]= q.front();
        for(int i=1;i<arr.size()-k+1;i++){
            if(arr[i-1]<0){
                q.pop();
                
            }
            if(arr[i+k-1]<0) q.push(arr[i+k-1]);
            if(!q.empty()) v[i]=q.front();
        }
        return v;
    }
};

//{ Driver Code Starts.
int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        Solution ob;
        vector<int> ans = ob.FirstNegativeInteger(arr, k);
        for (auto it : ans) {
            cout << it << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends