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
    int n,posVal=0,f=0;
    cin >> n;
    int k=n;
    if(n<=3) {
        cout << -1 << endl;
        return;
    }
     if(n%2!=0) n--;
     if(k%2==0) k--;
        for(int i=2;i<=n;i+=2){
            int val = k+i;
            for(int j=2;j*j<=val;j++){
                if(val%j==0){
                    posVal=i;
                    f=1;
                    break;
                }
            }
            if(f) break;
        }
        if(posVal==0){
            cout << -1 << endl;
            return;
        }
        for(int i=1;i<=k;i+=2){
        cout << i << " ";
    }
    cout << posVal<< " ";

    for(int i=n;i>1;i-=2){
        if(i!=posVal) cout << i << " ";
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