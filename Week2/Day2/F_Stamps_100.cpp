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
    int n,f=0;
    cin >> n;
    string s;
    cin >> s;
    int i=0;
    while(s[i]!='1' && i<n) {
        cout << 0;
        i++;
    }
    if(i==n-2){
        cout << 1 << s[n-1] << endl;
        return;
    }
    if(i<n) {
        cout << 1;
       i++;
    }
    while(i<n){
        cout << 0;
        i++;
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