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
    ll n,mx=0;
    cin >> n;
    vector<ll> v(n),even;
    for(int i=0;i<n;i++){
        cin >> v[i];
        if(v[i]%2!=0) mx=max(mx,v[i]);
        else even.push_back(v[i]);
    }
    sort(even.begin(),even.end());
    if(even.size()==n || even.size()==0) {
        cout << 0 << endl;
        return;
    }
    int ans=even.size();
    for(auto u:even){
        if(u>mx) {
            ans++;
            cout << ans << endl;
            return;
        }
        mx+=u;
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