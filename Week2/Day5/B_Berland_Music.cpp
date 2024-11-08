#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define ld  long double
#define ios() ios_base:: sync_with_stdio(0);cin.tie(0);
bool cmp(const pair<int,int> &a,const pair<int,int> &b){
      if (a.second == b.second) {
            return a.first > b.first;
        }
        return a.second < b.second;
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
    cin >> n ;
    string s;
    vector<int> v(n),ans(n+1);
    vector<pair<int,int>> zero,one;
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    cin >> s;
    for(int i=0;i<n;i++){
        if(s[i]=='0') zero.push_back({i+1,v[i]});
        else one.push_back({i+1,v[i]});
    }
    sort(zero.begin(),zero.end(),cmp);
    sort(one.begin(),one.end(),cmp);
    int i=1;
    for(auto u:zero){
        ans[u.first]=i;
        i++;
    }
    for(auto u:one){
        ans[u.first]=i;
        i++;
    }
    for(int i=1;i<=n;i++){
        cout << ans[i] << " ";
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
