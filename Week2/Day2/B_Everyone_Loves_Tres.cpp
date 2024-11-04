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
    if(n<=4) {
        if(n==2) cout << 66 << endl;
        else if(n==4) cout << 3366 << endl;
        else cout << -1 << endl;
        return;
    }
    vector<int> v(n,3);
    if(n%2) {
         v[n-1]=6;
        v[n-2]=6;
        v[n-4]=6;
    }
    if(n%2==0) {
        v[n-1]=6;
        v[n-2]=6;
    }
    for(auto u:v){
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