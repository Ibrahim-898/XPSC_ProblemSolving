#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define ld  long double
#define ios() ios_base:: sync_with_stdio(0);cin.tie(0);
bool cmp(const pair<int,int> &a,const pair<int,int> &b) {
    if(a.first!=b.first)
        return (a.first<b.first);
    else
        return (a.second>b.second);
}
int fact(int n)
{
    return (n==1) ? 1: n * fact(n - 1);
    // ? 
    }
int main()
{
    int t;
    cin >> t;
    while(t--) {
    ll a, b;
    cin >> a>> b;
    cout << (a^b) << endl;
}
}