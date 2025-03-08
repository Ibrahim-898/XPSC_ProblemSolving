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
    int n,d,k;
    cin >> n >> d >> k;
    vector<int> v(n+2);
    for(int i=0;i<k;i++){
        int x,y;
        cin >> x >> y;
        v[max(1,x-d+1)]++;
        v[y+1]--;
    }
    int sum = 0,mx=0,mn=INT_MAX,res1=1,res2=1;
    for(int i=1;i<=n;i++){
        sum+=v[i];
        v[i]=sum;
    }
   
    for(int i=1;i<=n-d+1;i++){
      //  cout << v[i] << " ";
        if(v[i]>mx){
            res1 = i;
            mx = v[i];
        }
        if(v[i]<mn && v[i]>=0){
            res2=i;
            mn = v[i];
        }
    }
   // cout << endl;
    cout << res1<< " " << res2 << endl;
    v.clear();
    
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