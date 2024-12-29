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
int fact(int n)
{
    return (n==1) ? 1: n * fact(n - 1); 
    // ? :
}
const int N=100;
void solve() {
    int x,y,k;
    cin >> x >> y >> k;
    int ans = x+1,rem=0;
    k--;
    while(k>0){
        if(ans<y){
            if(y-ans>k){
                cout << ans+k <<endl;
                return; 
            }
            else {
                k-=(y-ans);
                ans = 1;
                cout << ans+(k%(y-1)) << endl;
                return;
               // cout << ans << " " << k << endl;
            }
        }
        else{
         rem = y-(ans%y);
         if(rem==y) {
            rem=0;
         }
        // cout << ans <<  " rem " << rem << endl;
         if(rem>k){
            cout << ans+k << endl;
            return;
         }
        ans = (ans+rem)/y;
        k-=rem;
        if(ans==1){
            ans+=k%(y-1);
            break;
        }
        //cout << "* " << ans << " " << k << endl;
        }
    }
   while(ans%y==0){
    ans/=y;
   }
    cout << ans << endl;
    
    
}
int main()
{
    ios();
    int  t;
    cin >> t;
    while(t--){
        solve();

    }
}