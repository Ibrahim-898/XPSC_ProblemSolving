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
    vector<int> v,a;
    for(int i=0;i<4;i++){
        int x;
        cin >> x;
        v.push_back(x);
        a.push_back(x);
    }
    int y = v[2]-v[1],cnt=0,z = v[0]+v[1],cnt1=0;
    v.insert(v.begin()+2,y);
     a.insert(a.begin()+2,z);
    for(int i=2;i<5;i++){
        if(v[i]==v[i-1]+v[i-2]) cnt++;
    }
    for(int i=2;i<5;i++){
        if(a[i]==a[i-1]+a[i-2]) cnt1++;
    }
    cout << max(cnt,cnt1) << endl;
    
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