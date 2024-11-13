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
    ll n,mx1=0,mx2=0,ans=0,res=LLONG_MAX;
    cin>> n;
    vector<ll> v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    if(n==1){
        cout<< 1 << endl;
        return;
    }
    if(n%2==0){
        for(int i=0;i<n-1;i+=2){
        mx1 = max(mx1,(v[i+1]-v[i]));
    }
        cout << mx1 << endl;
        return;
    }
    for(int i=0;i<n;i+=2){
        ans=0;
        for(int j=0;j<i;j+=2){
            ans = max(ans,v[j+1]-v[j]);
        }
        for(int k=i+1;k<n-1;k+=2){
            ans = max(ans,v[k+1]-v[k]);
        }
        res = min(res,ans);
    }
    cout << res << endl;
    
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