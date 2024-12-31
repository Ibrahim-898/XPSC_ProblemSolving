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
    cin >>n >> k;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    while(k--){
        int x;
        cin >> x;
    int hi=n-1,lo=0,mid,f=1;
    while(lo<=hi){
        mid = (hi+lo)/2;
        if(v[mid]==x){
            cout << "YES" << endl;
            f=0;
            break;
        }
        if(v[mid]>x){
            hi=mid-1;
        }
        else if(v[mid]<x){
            lo = mid+1;
        }
    }
    if(f) cout << "NO" << endl;
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