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
    ll n,ans=LLONG_MAX,a,b,div1=-1,div2=-1;
    cin >> n;
    for(ll i=1;i*i<=n;i++){
        if(n%i==0){
        a = i;
        if((n/i)!=a || (a==1 && n/a==1))  b = n/i;
        else continue;
        ll lcm = (a/(__gcd(a,b)))*b;
        if(lcm==n){
       ll  res = max(a,b);
         if(res<ans){
            div1 = a,div2 = b;
            ans = res;
         }
        }
        }
    }
    cout << div1 << " " << div2 << endl;

    
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