#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define ld  long double
#define ios() ios_base:: sync_with_stdio(0);cin.tie(0);
// bool cmp(const pair<int,int> &a,const pair<int,int> &b){
//     if(a.first!=b.first)
//     return (a.first<b.first);
//     else
//      return (a.second>b.second);
// }
class cmp{
    public:
    bool operator()(pair<int,int> a,pair<int,int> b){
        if(a.second<b.second) return true;
        return false;
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
    map<int,int> mp;
    priority_queue<pair<int,int>,vector<pair<int,int>>,cmp> q;
    for(int i=1;i<=n;i++){
        int x,m;
        cin >> x;
        if(x==1)  {
            cin >> m;
            mp[i]=m;
            q.push({i,m});
            //cout << " * " <<  q.top().first << " " << q.top().second  << endl;
        }
        else{
            if(x==2){
                auto it = mp.begin();
                //cout << " * "  << endl;
                cout << it->first << " ";
                mp.erase(it);
            }
            if(x==3){
                int p = q.top().first;
                 q.pop();
                // cout << "1" << endl;
                cout << p << " ";
                mp.erase(p);
                
               

            }
            //cout << endl;
        }
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