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
    int n,ab=0,ba=0,cnt1=0,cnt2=0,ans=0,res=0;
    cin >> n;
    string s;
    cin >> s;
    char first,last=NULL;
    for(int i=0;i<n-1;i++){
        if(s[i]=='a' && s[i+1]=='b') ab++;
        else if(s[i]=='b' && s[i+1]=='a') ba++;
    }
    if(ab==ba) {
        cout << n << endl;
        return;
    }
    if(ab>ba) {
        last = 'a';
        first ='b';
    }
    else {
        last = 'b';
        first = 'a';
    }
    int i=0,j=n-1;
        while(s[i]!=first) {
            cnt1++;
            i++;
        }
         while(s[j]!=last) {
            cnt2++;
            j--;
        }
        cout << n-min(cnt1,cnt2) << endl;
    
    
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