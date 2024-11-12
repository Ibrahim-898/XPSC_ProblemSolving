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
    int n,k,cnt=0,ans=0;
    cin >> n >> k;
    string s;
    cin >> s;
    for(int i=0;i<k;i++){
        if(s[i]=='W') cnt++;
    }
    ans = cnt;
    int l = 0;
    for(int r=k;r<n;r++){
        if(s[r]=='W') cnt++;
        if(s[l]=='W') cnt--;
        l++;
        ans = min(ans,cnt);
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