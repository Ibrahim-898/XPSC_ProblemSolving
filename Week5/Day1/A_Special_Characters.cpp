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
    cin >> n;
    if(n%2){
        cout << "NO" << endl;
        return;
    }
    char ch=65;
    cout << "YES" << endl;
    for(int i=1;i<=(n+1)/2;i++){
        for(int j=0;j<2;j++){
            cout << ch;
        }
        ch++;
    }
    cout << endl;
    
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