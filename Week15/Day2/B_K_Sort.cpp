#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T>  using ordered_set = tree<T, null_type, less_equal<T>, rb_tree_tag,tree_order_statistics_node_update >;
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
    vector<int> v(n),dif;
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    int x = v[0];
    for(int i=1;i<n;i++){
        while(i<n && v[i]<x){
            dif.push_back(x-v[i]);
            i++;
        }
        if(i<n) x = v[i];

    }
    sort(dif.begin(),dif.end());
    if(dif.empty()){
        cout << 0 << endl;
        return;
    }
    int sz = dif.size();
    ll ans =0;
    ans =  1LL*(sz+1)*dif[0];
    sz--;
    for(int i=1;i<dif.size();i++){
        ans+= 1LL *(dif[i]-dif[i-1])*(sz+1);
        sz--;
    }
    cout << ans <<  endl;
    
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