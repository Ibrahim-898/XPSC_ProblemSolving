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
    int n;
    cin >> n;
    vector<int> v(n-1),ans(n);
    for(int i=0;i<n-1;i++){
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    ans[0]=v[0]/2;
    ans[1]=v[0]/2+v[0]%2;
    for(int i=2;i<n;i++){
        ans[i]=v[i-1]-ans[i-1];
    }
    for(auto u:ans){
        cout << u << " ";
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