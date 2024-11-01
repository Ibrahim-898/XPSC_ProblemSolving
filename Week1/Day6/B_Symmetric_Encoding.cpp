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
    int n;
    cin >> n;
    string s;
    cin >> s;
    set<char> st;
    for(int i=0;i<n;i++){
        st.insert(s[i]);
    }
    map<char,char> mp;
    while(!st.empty()){
        mp[*st.begin()]=*--st.end();
        mp[*--st.end()]=*st.begin();
        if(st.size()>0)st.erase(st.begin());
        if(st.size()>0)st.erase(--st.end());
    }
    for(int i=0;i<n;i++){
        s[i]=mp[s[i]];
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