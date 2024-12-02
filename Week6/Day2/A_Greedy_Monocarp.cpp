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
    ll n,k,sum=0;
    cin >> n >> k;
    vector<ll> v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    sort(v.rbegin(),v.rend());
    for(int i=0;i<n;i++){
        sum+=v[i];
        if(sum>k){
            sum-=v[i];
            cout << k-sum <<endl;
            return;
        }
    }
    cout  << k-sum << endl;
    
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