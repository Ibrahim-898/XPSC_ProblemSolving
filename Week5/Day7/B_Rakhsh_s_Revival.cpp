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
    ll n,m,k;
    cin >> n >> m >> k;
    string s;
    cin >> s;
    ll j=0,i=0,cnt=0,ans=0;
    while(j<m){
        if(s[j]=='1') cnt++;
        j++;
    }
    j--;
    while(j<n){
        if(cnt==0){
            int count=0,p=j;
            while(p<n && count!=k){
                s[p]='1';
                count++;
                p++;
            }
            cnt++;
            ans++;
        }
        j++;
        if(s[j]=='1') cnt++;
        if(s[i]=='1') cnt--;
        i++;
       
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