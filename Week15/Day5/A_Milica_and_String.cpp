#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define d   double
#define ios() ios_base:: sync_with_stdio(0);cin.tie(0);
void solve(){
    int n,k,cntb=0;
    string s;
    cin >> n >> k;
    cin >>  s;
    for(int i=0;i<n;i++) {
        if(s[i]=='B') cntb++;
    }
    if(cntb==k) cout << 0  << endl;
    else if(cntb<k){
        int i=0,f=0,cnta=0;
        //cout << "b" << cntb << endl;
        while(cnta!=(k-cntb)){
            f=i;
            if(s[i]=='A') { cnta++;}
             i++;
        }
        cout << 1  << endl;
        cout << f+1  << " " << 'B' << endl;
    }
    else{
        int cnt =0,j=n-1,f=0;
        while(cnt!=k){
            f=j;
            if(s[j]=='B') cnt++;
            j--;
        }
        if(f==0){ f=n;}
        cout << 1 << endl;
        cout << f  << " " << 'A' << endl;
    }
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
 