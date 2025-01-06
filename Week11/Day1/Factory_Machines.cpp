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
bool isOk(){
    
}
void solve() {
    int n,x;
    cin >> n >> x;
    vector<ll> v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    
    }
    sort(v.begin(),v.end());
    ll lo = 0,hi=1e18,mid,res=LLONG_MAX;
    while(lo<=hi){
        mid = (hi+lo)/2;
        ll ans = 0;
        for(int i=0;i<n;i++){
            ans+=(mid/v[i]);
            if(ans>= x || mid/v[i]==0) break;
        }
        if(ans>=x){
            res = min(res,mid);
            hi = mid-1;
        }
        else if(ans<x){
            lo = mid+1;
        }
       
        
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