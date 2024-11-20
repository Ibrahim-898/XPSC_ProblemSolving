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
    ll n,sum=0,ans=0;
    cin >> n;
    vector<ll>v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
        sum+=v[i];
    }
    string s;
    cin >> s;
    int i=0,j=n-1;
    while(i<j){
        while(i<n && s[i]!='L') {
            sum-=v[i];
            i++;
        }
        while(j>=0 && s[j]!='R') {
            sum-=v[j];
            j--;
        }
         if(i<j && s[i]=='L' && s[j]=='R'){
            ans+=sum;
            sum-=v[i];
            sum-=v[j];
            i++;
            j--;
        }
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