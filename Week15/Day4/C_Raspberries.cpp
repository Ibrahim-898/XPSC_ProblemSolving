#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define ios() ios_base:: sync_with_stdio(0);cin.tie(0);
void solve(){
    int n,k,x,ans=1e9+10,f=1,even=0,odd=0;
    cin >> n >> k;
    vector<int>v(n);
    for(int i=0;i<n;i++) {
        cin >> v[i];
        if(v[i]%k==0) {
            f=0;
            ans =0;
        }
        if(v[i]%2==0) even++;
        if(f){
        x= k-(v[i]%k);
        ans = min(x,ans);
        }
    }
    if(k==4){
        if(even>=2) even =2;
        ans = min(ans,2-even);
    } 
    cout << ans << endl;


    }
int main()
{
    ios();
    int t;
    cin >> t;
    while(t--){
        solve();
    }

   
    
}
 