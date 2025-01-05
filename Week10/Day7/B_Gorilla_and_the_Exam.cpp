#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define ld  long double
#define ios() ios_base:: sync_with_stdio(0);cin.tie(0);
bool cmp(const pair<int,int> &a,const pair<int,int> &b){
    //if(a.first!=b.first)
    return (a.first>b.first);
    // else
    //  return (a.second>b.second);
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
    int n,k;
    cin >> n >> k;
    map<int,int> mp;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        mp[x]++;
    }
    vector<pair<int,int>> v;
    for(auto u:mp){
        v.push_back({u.second,u.first});
    }
    sort(v.begin(),v.end());
    for(auto& u:v){
        
       if(k>0) {
         int x = min(k,u.first);
        u.first-=min(k,u.first);
       
        k-=min(k,x);
       }
       else break;
    }
    int cnt =0;
    for(auto u:v){
        if(u.first>0){
             cnt++;
        }
    }
    
    if(cnt==0) cnt++;
    cout << cnt << endl;
    
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