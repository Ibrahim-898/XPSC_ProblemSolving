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
    int n,prev,f=1;
    cin >> n;
    int v[n][n-1];
    map<int,int> mp;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            cin >> v[i][j];
            if(j==0){ mp[v[i][0]]++;
             //cout << " * " <<  v[i][j] << endl;
            }
        }
    }
    vector<int> ans;
     
    for(int i=0;i<n;i++){
    if(f && mp[v[i][0]]==n-1){
        ans.push_back(v[i][0]);
        f=0;
    }
    else if(mp[v[i][0]]!=n-1)  prev = v[i][0];
    }
   ans.push_back(prev);
    for(int i=1;i<n-1;i++){
        for(int j=0;j<n;j++){
            //cout << i << endl;
            if(v[j][i]!=prev){
                ans.push_back(v[j][i]);
                prev = v[j][i];
                //cout << i << " * " << v[j][i]  << " " << prev << endl;
                break;
            }
        }

    }
   for(auto u:ans){
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