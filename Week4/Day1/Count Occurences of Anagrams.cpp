//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	int search(string pat, string txt) {
	    map<char,int> mp1,mp2;
	    for(int i=0;i<pat.size();i++){
	        mp1[pat[i]]++;
	        mp2[txt[i]]++;
	    }
	    bool present = true ;
	    int ans =0;
	    for(auto u:mp1){
	        if(mp2[u.first]!=u.second) present = false;
	    }
	    if(present == true) ans++;
	    int k = pat.size();
	    int sz =txt.size()-(pat.size()-1);
	    for(int i=1;i<sz;i++){
	       if(mp2[txt[i-1]]>0) {
	           mp2[txt[i-1]]--;
	       }
	        mp2[txt[i+k-1]]++;
	       int cnt =0;
	       for(auto u:mp1){
	        if(mp2[u.first]==u.second) cnt+=u.second;
	       }
	       if(cnt==pat.size()) ans++;
	    }
	    mp1.clear();
	    mp2.clear();
	    return ans;
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends