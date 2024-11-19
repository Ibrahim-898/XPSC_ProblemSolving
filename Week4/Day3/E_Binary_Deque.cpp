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
    int n,s,sum=0;
    cin >> n >> s;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
        sum+=v[i];
    }
    if(sum<s){
        cout << -1 << endl;
        return;
    }
    int i=0,j=0,ans=0,sum1=0;
    while(j<n){
        while(j<n && sum1<=s){
            sum1+=v[j];
             if(sum1==s){
            ans = max(ans,j-i+1);
            //cout << j << " " << i  <<  " " << sum1 << " s " << s  <<  " ans " << ans << endl;
           }
           
            j++;
        }
       
        while(i<n && sum1>s){
            sum1-=v[i];
            i++;
        }
        if(j==n) break;
    }
    cout << n-ans << endl;
    
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