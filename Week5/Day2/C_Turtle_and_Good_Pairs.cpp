#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define ld  long double
#define ios() ios_base:: sync_with_stdio(0);cin.tie(0);
bool cmp(const pair<int,int> &a,const pair<int,int> &b){
     return (a.second>b.second);
}
class compare {
public:
    bool operator()(pair<int, int> a, pair<int, int> b) {
        if (a.second == b.second) {
            return a.first > b.first;
        }
        return a.second < b.second;
    }
};
int fact(int n)
{
    return (n==1) ? 1: n * fact(n - 1); 
    // ? :
}
const int N=100;
void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    map<char,int> mp;
    for(int i=0;i<n;i++){
        mp[s[i]]++;
    }
    vector<pair<char,int>> v;
    for(auto u:mp){
        v.push_back({u.first,u.second});
    }
    sort(v.begin(),v.end(),cmp);
    // for(auto u:v){
    //     cout << u.first << " " << u.second << endl;
    // }
    int i=0,j=0;
    vector<char> ans(n);
    for(int i=0;i<v.size();i++){
        char c = v[i].first;
        int val = v[i].second;
        while(val>0){
            ans[j]=c;
            val--;
            j+=2;
            if(j>=n) j=1;
        }
    }
    for(auto u:ans){
        cout << u;
    }
    cout << endl;
    
}
int main()
{
    ios();
    int  t = 1;
      cin >> t;
    while(t--){
        solve();

    }
}