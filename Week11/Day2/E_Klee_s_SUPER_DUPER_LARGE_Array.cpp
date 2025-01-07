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
    int n,k;
    cin >> n >> k;
    int x = n+k-1;
   
    ll sub = (1LL*k*(k-1))/2;
     ll total = (1LL*x*(x+1))/2-sub;
    int lo=k,hi=x,mid;
    ll ans = 1e19;
    while(lo<=hi){
        mid = lo+(hi-lo)/2;
        ll pref = (1LL*mid*(mid+1)/2)-sub;
        ll suf = total-pref;
        ans = min(ans,abs(pref-suf));
        //if(pref==suf) break;
        if(pref>suf){
            hi = mid-1;
        }
        else lo = mid+1;
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