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
    string s;
    cin >> s;
    int cnt3=0,cnt2=0,sum=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='2')cnt2++;
        if(s[i]=='3') cnt3++;
        sum+=s[i]-'0';
    }
    int f=0;
    for (int i = 0; i <= cnt2; ++i) {
        for (int j = 0; j <= cnt3; ++j) {
            if ((sum+(i * 2 + j * 6))%9==0) {
                cout << "YES" << endl;
                f=1;
                break;
            }
        }
        if(f) break;
    }
    if(f==0)cout << "NO" << endl;
    
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