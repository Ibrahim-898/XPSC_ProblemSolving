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
    map<string,int> mp;
    vector<string> ans;
    for(int i=0;i<n;i++){
        string s;
        cin >> s;
        if(mp[s]==0){
            cout << "OK" << endl;
            mp[s]++;
        }
        else{
        cout << s << mp[s] << endl;
            mp[s]++;
        }
    }
    
}
int main()
{
    ios();
    int  t = 1;
  //   cin >> t;
    while(t--){
        solve();

    }
}