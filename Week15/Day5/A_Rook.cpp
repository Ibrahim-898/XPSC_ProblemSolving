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
    string s;
    cin >> s;
    for(int i='a';i<='h';i++){
        if(s[0]==i) continue;
        else cout << char(i) << s[1] << endl;
    }
    for(int i=1;i<=8;i++){
        if(s[1]==i+48) continue;
        else  cout << s[0] << i << endl;
    }
    
    
}
int main()
{
    ios();
    int  t;
    cin >> t;
    while(t--){
        solve();

    }
}