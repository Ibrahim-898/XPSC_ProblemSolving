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
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    for(int i=0;i<n;i++){
        int x;
        string s;
        cin >> x >> s;
        int j = 0;
        while(j<x){
            if(s[j]=='D') {
                if(v[i]==9){
                    v[i]=0;
                }
                else {
                     v[i]++;
                }
                j++;
            }
            else if(s[j]=='U'){
                if(v[i]==0){
                    v[i]=9;
                }
                else { 
                    v[i]--;
                }
                j++;
            }
    
        }
    }
    for(auto u:v){
        cout << u << " ";
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