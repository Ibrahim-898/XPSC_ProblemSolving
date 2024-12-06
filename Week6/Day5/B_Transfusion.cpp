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
    ll n,sum=0;
    cin >> n;
    vector<ll> v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
        sum+=v[i];
    }
    if(sum%n!=0){
        cout << "NO" << endl;
        return;
    }
    ll target =sum/n;
    for(int i=1;i<n-1;i++){
        if(v[i-1]<target){
            int change = target-v[i-1];
            v[i-1]=target;
            v[i+1]-=change;
        }
        else if(v[i-1]>target){
            int change=v[i-1]-target;
            v[i-1]=target;
            v[i+1]+=change;
        }
    }
    sort(v.begin(),v.end());
    if(v[0]!=v[n-1]){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
    }
    
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