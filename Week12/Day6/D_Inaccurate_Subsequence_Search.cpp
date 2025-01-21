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
    int n,m,k,match=0;
    cin >> n >> m >> k;
    vector<int> a(n),b(m);
    map<int,int> mp,cntb;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
     for(int i=0;i<m;i++){
        cin >> b[i];
        cntb[b[i]]++;
    }
    int i=0;
    while(i<m){
        mp[a[i]]++;
        if(cntb[a[i]]>0) {
            match++;
        }
        i++;
    }
    int ans=0;
    if(match>=k) ans++;
    cout << match << " " << ans << endl;
    for(int i=1;i<n-m+1;i++){
       // mp[a[i-1]]--;
        if(cntb[a[i-1]]>0) match--;
        //mp[a[i]]++;
        if(cntb[a[i]]>0) match++;
        if(match>=k) ans++;
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