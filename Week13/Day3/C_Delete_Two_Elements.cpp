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
    ll n,sum=0,ans=0;
    cin >> n;
    vector<ll> v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
        sum+=v[i];
    }
    sort(v.begin(),v.end());
    double mean = sum/(n*1.0),need=1.0*sum-(mean*(n-2));;
    if(need!=(int)need){
        cout << 0 << endl;
        return;
    }
    for(int i=0;i<n;i++){
        ll lo=0,hi=n-1,mid;
        ll x = need-v[i];
        int ub = upper_bound(v.begin(),v.end(),x)-v.begin();
        int lb = lower_bound(v.begin()+i,v.end(),x)-v.begin();
        if(lb==i) lb++;
        if(lb<ub) ans+=ub-(lb);
       // cout << ans << endl;

    
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