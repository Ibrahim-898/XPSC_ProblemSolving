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
    ll n,mx=0,sum=0,mn=INT_MAX;
    cin >> n;
    vector<ll> v(n),lost(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
        sum+=v[i];
        mx = max(mx,v[i]);
        mn = min(mn,v[i]);
    }
    for(int i=0;i<n;i++){
        lost[i]=mx-v[i];
    }
    ll res = lost[0];
    for(int i=1;i<n;i++){
        res = __gcd(res,lost[i]);
    }
    ll need = mx*n-sum;
    cout << need/res << " " <<  res << endl;
    

    
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