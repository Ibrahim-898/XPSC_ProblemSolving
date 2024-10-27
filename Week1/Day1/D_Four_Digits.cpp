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
    int n,ans=0,x;
    cin >> n;
    x=n;
     string s;
    while(x!=0){
        int p = x%10;
        s.push_back((x%10)+'0');
        x/=10;
        ans++;
    }
    int rem = 4-ans;
        for(int i=0;i<rem;i++){
         s.push_back('0');
    }
    reverse(s.begin(),s.end());
    cout << s << endl;
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