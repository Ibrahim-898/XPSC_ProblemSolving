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
    map<char,int> mp;
     char x;
     int f=0;
        string res,res1,ans;
    for(int i=0;i<s.size();i++){
        mp[s[i]]++;
    }
    int cnt =0;
    for(auto u:mp){
        if(u.second%2) cnt++;
    }
    if(cnt>1) cout << "NO SOLUTION" << endl;
    else{
       
        for(auto u:mp){
            if(u.second%2){
                x=u.first;
                f=1;
                    int i=0;
                    while(i<u.second/2){
                         res.push_back(u.first);
                        res1.push_back(u.first);
                        i++;
                    }
                
            }
           if(u.second%2==0){
            int  i=0;
            while(i<u.second/2){
            res.push_back(u.first);
            res1.push_back(u.first);
            i++;
            }
 
           }
        }
        if(f){
            res.push_back(x);
        }
        reverse(res1.begin(),res1.end());
        ans= res+res1;
        cout << ans << endl;
    } 
    
    
}
int main()
{
    ios();
    int  t = 1;
//    cin >> t;
    while(t--){
        solve();
 
    }
}
