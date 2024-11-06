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
class cmp {
public:
    bool operator()(pair<int, int> a, pair<int, int> b) {
        if (a.second == b.second) {
            return a.first > b.first; // Compare first elements if second elements are the same
        }
        return a.second < b.second; // Otherwise, compare by second element
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
    vector<bool> valid(n,0); 
    priority_queue<pair<int,int>,vector<pair<int,int>>,cmp> q;
    int j=1,c=1;
    for(int i=0;i<n;i++){
        int x,m;
        cin >> x;
       
        if(x==1)  {
            cin >> m;
            q.push({j,m});
             j++;
        }
           else if(x==2){
                while(valid[c]) c++;
                cout << c << " ";
                valid[c]=1;
            }
            else{
                while(valid[q.top().first]){
                 q.pop();
                }
                cout  << q.top().first <<" ";
                valid[q.top().first]=1;
                q.pop();
            
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