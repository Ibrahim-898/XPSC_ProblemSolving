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
    ll n,sum=0;
    cin >> n;
    string s;
    cin >> s;
    ll ans[n+1];
    memset(ans,0,sizeof(ans));
    for(int i=0;i<n;i++){
        if(s[i]=='L') sum+=i;
        else sum+=(n-i-1);
    }
    int i=0,j=n-1,cnt=0;
    while(i<n/2 && j>=n/2){
        if(i<n/2 && s[i]=='L'){
            sum-=i;
            sum+=(n-i-1);
            s[i]='R';
            cnt++;
            i++;
            ans[cnt]=sum;
        }
        else i++;
       // cout << cnt << " " << i << " " << j << endl;
        if(j>=n/2 && s[j]=='R'){
            sum-=(n-j-1);
            sum+=j;
            cnt++;
            s[j]='L';
            j--;
            ans[cnt] = sum;
           // cout << cnt << " * " << i << " " << j << endl;
        }
        else j--;
        
        //if(i==n/2 && j>n/2) break;
    }
    //cout << cnt << " " << sum << endl;
    for(ll i=cnt;i<=n;i++){
        ans[i]=sum;
    }
    for(int i=1;i<=n;i++){
        cout << ans[i] << " ";
    }
    cout << endl;
    
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