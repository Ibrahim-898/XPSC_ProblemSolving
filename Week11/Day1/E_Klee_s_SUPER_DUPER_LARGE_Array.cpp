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
   ll n,k;
    cin >> n >> k;
    ll nn = n+k-1;
    ll totalsum = (1LL*nn*(nn+1))/2;
    ll sub = (1LL*k*(k-1))/2;
    ll hi=nn,lo=k,mid,ans=1e19;
    while(lo<=hi){
        mid = lo+(hi-lo)/2;
        ll prefsum = (1LL*mid*(mid+1)/2)-sub;
        ll sufsum = totalsum-prefsum;
        ll dif = abs(prefsum-sufsum);
        ans = min(ans,dif);
        if(prefsum==sufsum) break;
        if(prefsum>sufsum){
            hi=mid-1;
        }
        else{
            lo=mid+1;
        }
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