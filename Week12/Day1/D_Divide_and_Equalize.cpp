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
class compare {
public:
    bool operator()(pair<int, int> a, pair<int, int> b) {
        if (a.second == b.second) {
            return a.first > b.first;
        }
        return a.second < b.second;
    }
};
int fact(int n)
{
    return (n==1) ? 1: n * fact(n - 1); 
    // ? :
}
const int N=100;
void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    map<int,int> mp;
    for(int i=0;i<n;i++){
        for(int j=2;j*j<=v[i];j++){
            while(v[i]%j==0){
                mp[j]++;
                v[i]/=j;
            }
            
        }
        if(v[i]>1) mp[v[i]]++;
    }
    int f=1;
    for(auto u:mp){
        if((u.second%n)!=0){
            cout << "NO" << endl;
            f=0;
            break;
        }
    }
    if(f) cout << "YES" << endl;
    
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