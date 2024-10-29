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
    int n,m;
    cin >> n >> m;
    vector<pair<string,string>> a,b;
    cin.ignore();
    for(int i=0;i<n;i++){
        string x,y;
        cin >> x >> y;
        //cout << x << " " << y << endl;
        y = y+';';
        //cout << y << endl;
        a.push_back({x,y});
    } 
     for(int i=0;i<m;i++){
        string p,q;
        cin >> p >> q;
        b.push_back({p,q});
    } 
    for(int i=0;i<m;i++){
         string value = b[i].second;
         string key = b[i].first;
        for(int j=0;j<n;j++){
            if(a[j].second==value){
                cout << key << " " << value << " #" << a[j].first << endl;
            }
        }
    }
    
    
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