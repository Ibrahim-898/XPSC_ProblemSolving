#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define ld  long double
#define ios() ios_base:: sync_with_stdio(0);cin.tie(0);
bool cmp( const pair<string,int> &a, const pair<string,int> &b){
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
    map<string,int> mp;
    for(int i=0;i<n;i++){
        string s;
        cin >> s;
        mp[s]=i;
    }
    vector<pair<string, int>> v(mp.begin(), mp.end());
    sort(v.begin(),v.end(),cmp);
    for(auto u:v){
        cout << u.first << endl;
    }
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