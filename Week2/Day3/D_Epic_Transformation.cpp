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
int fact(int n)
{
    return (n==1) ? 1: n * fact(n - 1); 
    // ? :
}
const int N=100;
void solve() {
    int n;
    cin >> n;
    map<int,int> mp;
    for(int i=0;i<n;i++){
        int x ;
        cin >> x;
        mp[x]++;
    }
    vector<int> v;
    for(auto u:mp){
        v.push_back(u.second);

    }
    sort(v.rbegin(),v.rend());
    for(int i=1;i<v.size();i++){
        v[i]=v[i-1]-v[i];
    }
     int val = v[v.size()-1];
    if(val<0){
        if(val%2) cout << 1 << endl;
        else cout << 0 << endl;
        return;
    }
    cout << v[v.size()-1] << endl;
    
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