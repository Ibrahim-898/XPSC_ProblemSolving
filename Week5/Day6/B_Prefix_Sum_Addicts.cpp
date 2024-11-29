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
    ll n,k;
    cin >> n >> k;
    vector<ll> v(k);
    for(int i=0;i<k;i++) cin >> v[i];
    ld dif=0.0;
    if(n==k) dif=v[0];
    if(n>k)  dif = v[0]/(n-k+(ld)1);  
    for(int i=1;i<k;i++){
        if(v[i]-v[i-1]<dif){
            cout << "No" << endl;
            return;
        }
        else dif=v[i]-v[i-1];
    }
    cout << "Yes" << endl;
    
}
int main()
{
    ios();
    int t;
    cin >> t;
    while(t--){
        solve();

    }
}