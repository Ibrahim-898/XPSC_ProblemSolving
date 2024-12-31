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
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    int k;
    cin >> k;
    while(k--){
        int x,y;
        cin >> x >> y;
    int lo = lower_bound(v.begin(),v.end(),x)-v.begin();
    int hi = upper_bound(v.begin(),v.end(),y)-v.begin();
    //cout << "* " << lo << " " <<  hi << endl;
    if(hi==n || v[hi]>y) hi--;
    int ans = hi-lo+1;
    cout << ans << " ";
    }
    cout << endl;
    
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