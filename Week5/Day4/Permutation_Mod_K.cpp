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
    int n,k;
    cin >> n >> k;
    if(k==1 || n%2 && k==2){
        cout << -1 << endl;
        return;
    }
    vector<int> v;
    for(int i=1;i<=n;i++){
        v.push_back(i);
    }
    for(int i=0;i<n-1;i+=2){
        swap(v[i],v[i+1]);
    }
    if(n%k){
        swap(v[n-1],v[n-2]);
    }
    for(auto u:v){
        cout << u << " ";
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