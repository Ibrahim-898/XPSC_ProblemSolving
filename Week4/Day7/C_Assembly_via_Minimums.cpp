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
    map<int,int> mp;
    int sz = n*(n-1)/2;
    for(int i=0;i<sz;i++){
        int x;
        cin >> x;
        mp[x]++;
    }
    int y=n-1;
    vector<int> ans;
    for(auto u:mp){
        //cout << u.first << " " << u.second << endl;
        int p = u.second;
        while(p>0){
            p-=y;
            y--;
            ans.push_back(u.first);
        }
    }
    for(auto u:ans){
        cout <<u << " ";
    }
    cout << ans[ans.size()-1] << endl;


    
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