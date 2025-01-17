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
    int n,m,a,b;
    cin >> n >> m;
    vector<pair<int,int>> v(n);
    cin >>a >> b;
    int prevx=a;
    int prevy=b;
    a +=m;
    b+=m;
    
    int ans = 4*m*n;
    for(int i=1;i<n;i++){
        int x,y;
        cin >> x >> y;
        x+=prevx;
        y+=prevy;
        prevx=x;
        prevy=y;
       ans-=((a-x)+(b-y))*2;
       a=x+m;
       b=y+m;
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