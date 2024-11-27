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
bool issorted(int *a,int size){
    for(int i=0;i<size-1;i++){
        if(a[i]>a[i+1]){
            return false;
        }
    }
    return true;
}
const int N=100;
void solve() {
    ll n;
    string s,a;
    cin >>  n >> s;
    a=s;
    reverse(s.begin(),s.end());
    for(int i=0;i<s.size();i++){
        if(s[i]==a[i]) continue;
        else if(s[i]<a[i]) {
            cout << s+a << endl;
            return;
        }
        else {
            cout << a << endl;
            return;
        }
    }
    cout << a << endl;
     
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