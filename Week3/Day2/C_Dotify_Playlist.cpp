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
    int n,k,l;
    cin >> n  >> k >> l;
    vector<int> v;
    for(int i=0;i<n;i++){
        int x,y;
        cin >> x >> y;
        if(y==l){
            v.push_back(x);
        }
    }
    sort(v.rbegin(),v.rend());
    int i=0,ans=0,cnt=0;
    while(i<v.size()){
        ans+=v[i];
        cnt++;
        i++;
        if(cnt==k){
            cout << ans << endl;
            return;
        }

    }
    cout << -1 << endl;
    
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