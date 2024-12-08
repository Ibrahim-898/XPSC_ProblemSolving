#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define ld  long double
#define ios() ios_base:: sync_with_stdio(0);cin.tie(0);
bool cmp(const pair<ll,ll> &a,const pair<ll,ll> &b){
    if(a.first!=b.first)
    return (a.first<b.first);
    else
     return (a.second>b.second);
}
class compare {
public:
    bool operator()(pair<ll, ll> a, pair<ll, ll> b) {
        if (a.second == b.second) {
            return a.first > b.first;
        }
        return a.second < b.second;
    }
};
ll fact(ll n)
{
    return (n==1) ? 1: n * fact(n - 1); 
    // ? :
}
const ll N=100;
void solve() {
    ll n,k;
    cin >> n >> k;
    vector<ll> v(n);
    for(ll i=0;i<n;i++){
        cin >> v[i];
    }
    sort(v.begin(),v.end());
     ll pos = n/2;
    ll x = v[pos];
    ll range=1;
    while(k>0){
    ll up = upper_bound(v.begin(),v.end(),x)-v.begin();
     range = up-pos;
    if(up==n) {
     ll dif = v[up-1]-x;
       x+=k/range;
       k=0;
    }
    else{
    ll dif = v[up]-x;
    if(k<(range*dif)){
       x+=k/range;
       k=0;
    } 
    else{
    k-=(range*dif);
     x=v[up];
    }
    
    }
    }
    cout << x << endl;

    
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