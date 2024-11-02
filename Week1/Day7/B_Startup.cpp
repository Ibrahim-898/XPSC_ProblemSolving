#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define ld  long double
#define ios() ios_base:: sync_with_stdio(0);cin.tie(0);
bool cmp(const pair<ll,ll> &a,const pair<ll,ll> &b){
     return (a.second>b.second);
}
int fact(int n)
{
    return (n==1) ? 1: n * fact(n - 1); 
    // ? :
}
const int N=100;
void solve() {
    ll n,k,ans=0;
    cin >> n >> k;
    map<ll,ll> mp;
    for(int i=0;i<k;i++){
        int x,y;
        cin >> x >> y;
        mp[x]+=y;
    }
   
    ll sz = mp.size();
     vector<pair<ll,ll>> a;
    for(auto u:mp){
        a.push_back(u);
    }
    sort(a.begin(),a.end(),cmp);
    ll cnt=0;
    for(auto u:a){
        ans+=u.second;
        cnt++;
        if(cnt==min(n,sz)) break;
    }
    cout << ans << endl;
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