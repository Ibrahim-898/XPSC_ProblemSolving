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
    int n,p1=0,p2=0;
    cin >> n;
    string a,b;
    cin >> a >> b;
    for(int i=0;i<n;i++){
    if(a[i]=='R' && b[i]=='S') p1++;
    else if(a[i]=='S' && b[i]=='R') p2++;
    else if(a[i]=='S' && b[i]=='P') p1++;
    else if(a[i]=='P' && b[i]=='S') p2++;
    if(a[i]=='P' && b[i]=='R') p1++;
    else if(a[i]=='R' && b[i]=='P') p2++;
    }
    //cout << p1 << " " << p2 << endl;
    if(p1>p2) {
        cout << 0 << endl;
        return;
    }
    if(p1<p2){
        ll x = (p2-p1)/2+1;
        cout << x << endl;
    }
    else cout << 1 << endl;
    
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