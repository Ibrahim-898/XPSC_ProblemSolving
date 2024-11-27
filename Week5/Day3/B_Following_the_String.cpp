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
     return (a.second<b.second);
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
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        v.push_back({x,i});
    }
    sort(v.begin(),v.end(),cmp);
    map<int,int> mp;
    vector<char> ans(n);
    for(auto u:v){
        mp[u.first]++;
        ans[u.second]=mp[u.first]-1+97;
    }
    for(auto u:ans){
        cout << u;
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