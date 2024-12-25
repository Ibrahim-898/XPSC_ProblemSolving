#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define ld  long double
#define ios() ios_base:: sync_with_stdio(0);cin.tie(0);
bool cmp(const pair<int,int> &a,const pair<int,int> &b){
    if(a.first!=b.first)
    return (a.first<b.first);
    else
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
    ll n;
    cin >> n;
    vector<pair<ll,ll>> pr;
    for(ll i=0;i<n;i++){
        ll x;
        cin >> x;
        pr.push_back({x,i+1});

    }
    sort(pr.begin(),pr.end());
    ll ans = 0;
    for(ll i=1;i<pr.size();i++){
        if(pr[i].first!=pr[i-1].first){
            ans+=pr[i-1].second;
        }   
    }
    ans+=pr[pr.size()-1].second;
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