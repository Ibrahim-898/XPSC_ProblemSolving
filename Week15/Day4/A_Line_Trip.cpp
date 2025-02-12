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
int fact(int n)
{
    return (n==1) ? 1: n * fact(n - 1); 
    // ? :
}
const int N=100;
void solve() {
    int n,x,mx = 0 ;
    cin >> n >> x;
    vector<int> v,dif(n-1);
    v.push_back(0);
    for(int i=0;i<n;i++) {
        int m;
        cin >> m;
        v.push_back(m);
    }
    v.push_back(x);
    int sz = v.size();
    for(int i=1;i<sz;i++){
        int df = v[i]-v[i-1];
        if(i==sz-1) df*=2;
        mx = max(df,mx);
    }
    cout << mx << endl;
}
int main()
{
    ios();
    int  t;
    cin >> t;
    while(t--){
        solve();

    }
}