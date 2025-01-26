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
    vector<ll> v;
    for(ll i=0;i<n;i++){
        ll x;
        cin >> x;
        v.push_back(x);
        sum+=v[i];
    }
    ans=sum;
    if(n==1){
        cout << v[0] << endl;
        return;
    }
    while(v.size()>1){
        ll sum1=0,sum2=0,sumx=0;
        vector<ll> b;
        for(int i=0;i<v.size()-1;i++){
            b.push_back(v[i]);
            sum1+=(v[i+1]-v[i]);
        }
        b.push_back(v[v.size()-1]);
        reverse(b.begin(),b.end());
        for(int i=0;i<b.size()-1;i++){
            sum2+=(b[i+1]-b[i]);
        }
        if(sum2>sum1){
            v=b;
        }
        vector<ll> a;
       for(int i=0;i<v.size()-1;i++){
        a.push_back(v[i+1]-v[i]);
       }
       v=a; 
        for(int i=0;i<v.size();i++){
            sumx+=v[i];
        }
          
       ans = max(ans,sumx);
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