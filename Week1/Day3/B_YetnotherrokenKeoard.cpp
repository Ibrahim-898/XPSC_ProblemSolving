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
    stack<int> uppercase,lowercase;
    //cout << s << endl; 
    for(int i=0;i<s.size();i++){
        if((s[i]>='A' && s[i]<='Z') && s[i]!='B'){
            uppercase.push(i);
        }
        if((s[i]>='a' && s[i]<='z') && s[i]!='b'){
            lowercase.push(i);
        }
        if(s[i]=='B'){
            if(!uppercase.empty()){
                s[uppercase.top()]='*';
                uppercase.pop();
            }
        }
         if(s[i]=='b'){
            if(!lowercase.empty()){
                s[lowercase.top()]='*';
                lowercase.pop();
            }
        }
    }
    //cout << s << endl;
     for(int i=0;i<s.size();i++){
        if(s[i]!='B' && s[i]!='b' && s[i]!='*') cout << s[i];
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