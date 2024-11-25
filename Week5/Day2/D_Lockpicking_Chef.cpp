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
    int n,m,ans=INT_MAX;
    cin >> n >> m;
    string a,b;
    cin >> a >> b;
    for(int i=0;i<=n-m;i++){
        int k=0,mn=0;
        for(int j=i;j<i+m;j++){
            if(abs((a[j]-'0')-(b[k]-'0'))> 4){
                mn+=(9-max((a[j]-'0'),(b[k]-'0'))+min((b[k]-'0'),(a[j]-'0'))+1);
            }
            else{
                mn+=abs((a[j]-'0')-(b[k]-'0'));
            }
            k++;
        }
        ans = min(ans,mn);
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