#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define ld  long double
#define ios() ios_base:: sync_with_stdio(0);cin.tie(0);
bool cmp(const pair<int, int> &a, const pair<int, int> &b) {
    return a.second > b.second;
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
const int N=200007;
void solve() {
    ll n,q,res=0;
    cin >> n >> q;
    vector<ll> v(n),mp(N+1,0),ans(N+1,0);
    for(ll i=0;i<n;i++){
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    vector<pair<ll,ll>> arr,query;
    for(ll i=0;i<q;i++){
        ll x,y;
        cin >> x >> y;
        query.push_back({x,y});
        mp[x]++;
        mp[y+1]--;
    }
   
   for(ll i=1;i<=N;i++){
    mp[i]+=mp[i-1];
   }
   
   for(ll i=1;i<=N;i++){
   arr.push_back({i,mp[i]});
   }
   sort(arr.begin(),arr.end(),cmp);
   for(auto &[x,y]:arr){
   if(!v.empty()){ans[x]=v.back();
    v.pop_back();
   }
   else break;
   }
   for(ll i=1;i<=N;i++){
    ans[i]+=ans[i-1];
   }
   for(auto [x,y]:query){
    res+=ans[y]-ans[x-1];
   }
   cout << res << endl;

   
   
   
    
}
int main()
{
    ios();
    int  t = 1;
//    cin >> t;
    while(t--){
        solve();

    }
}