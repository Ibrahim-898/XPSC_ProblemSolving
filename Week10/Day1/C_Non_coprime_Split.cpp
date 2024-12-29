#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define ios() ios_base:: sync_with_stdio(0);cin.tie(0);
const int mod=1e9+7;
const int mx=1e7;
bitset<mx> isprime;
vector<int> prime;
void primegen(int n)
{
for(int i=3;i<=n;i+=2) {
        isprime[i]=1;
}
for(int i=3;i<=sqrt(n);i+=2){
    if(isprime[i]){
    for(int j=i+i;j<=n;j+=i){
        isprime[j]=false;
      }
    }
}
prime.push_back(2);
for(int i=3;i<=n;i+=2){
    if(isprime[i]==1) prime.push_back(i);
}
}
void solve(){
    int l,r;
        cin >> l >> r;
        
       if(r<4){
    //if(isprime[r] || r<4)
        cout << -1 << endl;
        return;
       }
     if(l==r)
    {
        int f =1;
        for(int i=2;i*i<=r;i++){
            if(r%i==0){
                f=0;
                cout << i << " " << r-i << endl;
                return;
            }
        }
        if(f) {
            cout << -1 << endl;
            return;
        }
    }
    
        cout << r/2 << " " << r/2 << endl;

}
int main()
{
    ios();
     //int lim=1e7+10;
   // primegen(lim);
    int t;
    cin >> t;
    while(t--){
        solve();
    }

   
    
}
 