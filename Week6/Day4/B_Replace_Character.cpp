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
    string s;
    cin >> s;
    map<char,int> mp;
    for(int i=0;i<n;i++){
        mp[s[i]]++;
    }
    vector<pair<int,char>> v;
    for(auto u:mp){
        v.push_back({u.second,u.first});
    }
    sort(v.begin(),v.end());
    // for(auto u:v){
    //     cout << u.first << " " << u.second << endl;
    // }
    char x = v[0].second;
    char y = v[v.size()-1].second;
    for(int i=0;i<n;i++){
        if(s[i]==x) {
            s[i]=y;
            break;
        }
    }
    cout << s << endl;
    
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