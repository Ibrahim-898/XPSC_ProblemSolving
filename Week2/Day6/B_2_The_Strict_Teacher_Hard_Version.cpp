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
    int n,m,q;
    cin >> n >> m >> q;
    vector<int> v(m);
    for(int i=0;i<m;i++){
        cin >> v[i];
    }
    //cout << "&" <<  v.size() << endl;
    sort(v.begin(),v.end());
    while(q--){
        int x;
        cin >> x;
    if(v[0]>x){
        cout << v[0]-1 << endl;
        continue;
    }
    else if(v[m-1]<x){
        //cout << "* " << m-1 << " " <<  v[m-1] << endl;
        cout << n-v[m-1] << endl;
        continue;
    }
    auto i = lower_bound(v.begin(),v.end(),x)-v.begin()-1;
    auto j = upper_bound(v.begin(),v.end(),x)-v.begin();
    cout << (v[j]-v[i])/2 << endl;
    }
  v.empty();
    
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