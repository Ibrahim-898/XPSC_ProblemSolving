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
    ll n,k,ans=0,start=1;
    cin >> n >> k;
    vector<int> segment;
    while(n>0){
       int x=(n+1)/2;
        n/=2;
        segment.push_back(x);
    }
    int sz = segment.size();
    vector<int> prefsegment(sz);
    prefsegment[0]=segment[0];
   for(int i=1;i<sz;i++){
    prefsegment[i]=prefsegment[i-1]+segment[i];
   }
   int indx = lower_bound(prefsegment.begin(),prefsegment.end(),k)-prefsegment.begin();
   int val = 1<<indx,i=0; 
   if(indx==0) {
    cout << k*2-1 << endl;
    return;
    
   }
    i = prefsegment[indx-1]+1;
   ll range = k-i+1;
        ans = 1LL*val*(range*2-1);
   cout <<  ans << endl;
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