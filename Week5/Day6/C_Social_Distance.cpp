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
    int n,k,ans=0;
    cin >> n >> k;
    string s;
    cin >> s;
    int i=0;
    while(i<n){
        bool f1=true,f2=true;
        if(s[i]=='0') {
            int x=i;
            int j=i+1,p=i-1;
            while(j<n && j<=i+k){
                if(s[j]=='1'){
                    i=j+1;
                    f1=false;
                    break;
                }
                j++;
            }
            while( f1==true && p>=0 && p>=i-k){
                if(s[p]=='1') {
                    i=p+k+1;
                    f2=false;
                    break;
                }
                p--;
            }
            //cout << i << " " << j << " " << f1 << " " << f2 << endl;
            if(f1==true && f2==true) {
                s[x]='1';
                ans++;
                i++;
            }
            //cout << "ans " << ans << endl;
        }
        else i++;
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