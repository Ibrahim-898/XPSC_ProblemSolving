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
    ll n,l,r,sum=0,sum1=0;
    cin >> n >> l >> r;
    vector<ll> v(n),a,b,ans,p,ans1;
    for(int i=0;i<n;i++){
        cin >> v[i];
        if(i<l-1) p.push_back(v[i]);
        if(i>=r){
            a.push_back(v[i]);
        }
        
    }
    for(int i=l-1;i<r;i++){
        b.push_back(v[i]);
    }
    
    sort(b.rbegin(),b.rend());
    sort(a.begin(),a.end());
    sort(p.begin(),p.end());
   int i=0,j=0;
    while(i<b.size() && j<a.size()){
        while(a[j]>=b[i]){
            j++;
        }
       if(j<a.size()) ans.push_back(a[j]);
        j++;
        i++;
        
    }
    i=0,j=0;
     while(i<b.size() && j<p.size()){
        while(p[j]>=b[i]){
            j++;
        }
       if(j<p.size()) ans1.push_back(p[j]);
        j++;
        i++;
        
    }
    for(auto u:ans){
        sum+=u;
    }
    
     for(auto u:ans1){
        sum1+=u;
    }
   
    int x = b.size()-ans.size(),k=b.size()-1;
    int y=b.size()-ans1.size(),m=b.size()-1;
    while(x--){
        sum+=b[k];
        k--;
    }
    while(y--){
        sum1+=b[m];
        m--;
    }
    cout << min(sum,sum1) << endl;

   
    
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