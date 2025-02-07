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
    int n,x,ans=1,cnt=1,p=0;
    cin >> n >> x;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    for(int i=1;i<n;i++){
        if(v[i]<v[i-1]){
            if(i<n-1 && x*v[i]<v[i+1]){
                v[i]=x*v[i];
                cnt++;
                int j=i+1;
                while(j<n && v[j-1]<=v[j]){
                cnt++;
                j++;
                 ans = max(ans,cnt);
                }
                cnt=1; 
                i++;
            }
            else {
                
               if(i<n-1) cnt=1;
               else if(v[i]*x>=v[i-1]) cnt++;
                 
                  
            }
        }
    else cnt++;
    ans = max(ans,cnt);
    //cout << i <<  " * " <<  cnt << " " << ans  << endl;
    }
    // if(n>1 && (v[n-1]<v[n-2] && x*v[n-1]>=v[n-2])){
    //     ans = max(ans,cnt+1);
    // }
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