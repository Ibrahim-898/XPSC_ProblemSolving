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
    ll n,s,sum=0,k=0,ans=LLONG_MAX;
    cin >> n >> s;
    vector<ll> v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    ll i=0,j=0;
    while(j<n){
        sum+=v[j];
        if(sum>=s){
           ans=min(ans,j-i+1);
           while(sum>s) {
            sum-=v[i];
            i++;
            if(sum>=s){
                ans = min(ans,j-i+1);
            }
           }
        }
        j++;
           
    }
    if(ans>n) ans =-1;
    cout << ans << endl;
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