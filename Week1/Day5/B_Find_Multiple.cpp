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
    int a,b,c;
    cin >> a >> b >> c;
    int div1 = a/c+(a%c>0),div2=b/c;
    if(div1>div2) {
        cout << -1 << endl;
        return;
    }
    cout << div1*c << endl;

    
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