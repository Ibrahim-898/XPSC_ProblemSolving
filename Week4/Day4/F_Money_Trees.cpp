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
    ll n,k,ans=0;
    cin >> n >> k;
    vector<ll> a(n),b(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
         if(a[i]<=k) ans = 1;
    }
    for(int i=0;i<n;i++){
        cin >> b[i];
       
    }
    ll i=0,j=1,sum=a[0];
    while(j<n){
        if(b[j-1]%b[j]==0){
            sum+=a[j];
        }
        else {
            i=j;
            sum = a[i];
        }
        while(i<n && sum>k){
            sum-=a[i];
            i++;
        }
          ans = max(ans,j-i+1);
         j++;
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