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
    vector<int> a(n),b(m),matc;
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
        if(cntb[a[i]]>0 && cntb[a[i]]>=mp[a[i]]) {
            match++;
            matc.push_back(a[i]);
        }
        i++;
    }
    int ans=0,j=m;
    if(match>=k) ans++;
    for(int i=0;i<n-m;i++){
        mp[a[i]]--;
        if(cntb[a[i]]>0 && mp[a[i]]==0) {
            match--;
        }
        mp[a[j]]++;
        if(cntb[a[j]]>0 && cntb[a[j]]>=mp[a[j]]) {
            match++;
        }
        if(match>=k) ans++;
        j++;
     }
    cntb.clear();
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