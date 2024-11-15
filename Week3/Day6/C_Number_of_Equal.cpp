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
    int n,m;
    cin >> n >> m;
    vector<int> a(n),b(m);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<m;i++){
        cin >> b[i];
    }
    ll i=0,j=0,cnt1=0,cnt2=0,ans=0;
    while(i<n && j<m){
        cnt1=0;
        cnt2=0;
       if(i<n && j<m && a[i]==b[j]){
        //cout << "* " << i << " " << j << endl;
        i++;
        cnt1=1;
        cnt2=1;
        while(i<n && a[i]==a[i-1]){
            cnt1++;
            i++;
        }
        j++;
        while( j<m &&  b[j]==b[j-1]){
            cnt2++;
            j++;
        }
       }
       else  if( a[i]<b[j]) i++;
        else if(a[i]>b[j]) j++;
       //cout << cnt1 << " " <<  cnt2 << endl; 
       ans += (cnt1*cnt2);
    }
    cout << ans << endl;
    
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