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
    ll n,res=0,ans=0,odd=0,mn=INT_MAX;
    cin  >> n;
    for(int i=0;i<n;i++){
        ll x;
        cin >> x;
        ans+=x;
        if(x%2==1){
            odd++;
            mn = min(mn,x);
        }
         
    }
    if(odd%2) ans-=mn;
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