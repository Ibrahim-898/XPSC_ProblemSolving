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
const int N=100;
void solve() {
    ll n,c,m,sum=0;
    cin >> n >> c;
    vector<ll> v(n);
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
       v[i]=x+i+1;  
    }
    sort(v.begin(),v.end());
     ll  i=0,cnt=0,f=1;
    for(int i=0;i<n;i++){
       c-=v[i];
        cnt++;
        if(c<0) {
            f=0;
            cout << cnt-1 << endl;
            break;
        }
    }
    if(f) cout << cnt << endl;
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