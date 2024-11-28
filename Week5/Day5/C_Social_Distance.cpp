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
    int n,k,ans=0;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<int> one;
    for(int i=0;i<n;i++){
        if(s[i]=='1') one.push_back(i);
    }
   // cout << one.size() << endl;
    for(int i=1;i<one.size();i++){
        int dif = one[i]-one[i-1]-1;
        //cout << dif << " "; 
        ans+=(dif)/(2*k+1);
    }
    if(one.size()==0){
        ans++;
        ans+=(n-1)/(k*2);
    }
    cout << ans << endl;
    
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