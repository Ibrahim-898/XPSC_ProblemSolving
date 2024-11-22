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
    int n;
    string s;
    cin >> n >> s;
    if(n==1){
        cout << 0 << endl;
        return;
    }
    int i=0,one=0,zero=0;
    while(i<n-1){
        while(s[i]==s[i+1]){
            i++;
        }
        if(s[i]=='0') zero++;
        else one++;
        i++;
    }
    if(s[n-1]!=s[n-2]){
        if(s[n-1]=='0') zero++;
        else one++;
    }
    cout << min(one,zero) << endl;
    
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