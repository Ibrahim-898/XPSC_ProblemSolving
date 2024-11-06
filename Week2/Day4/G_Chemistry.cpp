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
    int n,k,odd=0,even=0;
    cin >> n >> k;
    string a;
    cin >> a;
    map<char,int> mp;
    for(int i=0;i<a.size();i++){
        mp[a[i]]++;
    }

    for(auto u:mp){
        if(u.second%2) {
            if(u.second/2>0) even+=u.second/2;
             odd++;
        }
        else even++;

    }
   // cout << "* " << odd << " " << even << endl;
        if(odd-1>k)cout << "NO" << endl;
    else cout << "YES" << endl;

    
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