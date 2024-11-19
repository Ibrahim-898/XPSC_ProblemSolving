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
    int n,k;
    cin >> n >> k;
    map<int,int> mp;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    int i=0,j=0,ans=0;
    while(j<n){
        mp[v[j]]++;   
        while(mp.size()>k){
            mp[v[i]]--;
           if(mp[v[i]]==0) mp.erase(v[i]);
           i++;
        }
         ans+=j-i+1;
        j++;
    }
    cout << ans << endl;
    
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