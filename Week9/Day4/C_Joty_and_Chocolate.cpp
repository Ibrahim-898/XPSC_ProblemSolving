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
    ll n,a,b,p,q,cnta=0,cntb=0,common=0;
    cin >> n >> a >> b >> p >> q;
    cnta = n/a;
    cntb = n/b;
    ll lcm = (a/__gcd(a,b))*b;
    common = n/lcm;
    ll ans=0;
   
        ans = max(((cnta*p)+(cntb-common)*q),((cnta-common)*p+(cntb*q)));
    
    
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