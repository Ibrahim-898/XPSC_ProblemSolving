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
    string s;
    cin >> s;
    int f=1;
    char x;
    for(int i=0;i<s.size()-1;i++){
        if(s[i]==s[i+1]){
            f=0;
            if(s[i]=='a')  x = s[i]+1;
            else x = s[i]-1;
            s.insert(s.begin()+(i+1),x);
            break;
        }
    }
    //cout << s << endl;
    if(f) {
        if(s[s.size()-1]=='a') x = s[s.size()-1]+1;
        else x = s[s.size()-1]-1;
        s+=x;
    }
    cout << s << endl; 
    
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