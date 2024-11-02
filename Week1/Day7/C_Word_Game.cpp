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
    int n,p=0,q=0,r=0;
    cin >> n;
    string a[3][n];
    map<string,int> mp;
    for(int i=0;i<3;i++){
        for(int j=0;j<n;j++){
            cin >> a[i][j];
            mp[a[i][j]]++;
        }
    }
    vector<int> v(3);
     for(int i=0;i<3;i++){
        for(int j=0;j<n;j++){
            int x = mp[a[i][j]];
           if(x==2) v[i]++;
           else if(x==1) v[i]+=3;
        }
    }
    for(auto u:v){
        cout <<  u << " ";
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