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
    multiset<int> mst;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        mst.insert(x);
    }
    int val = *mst.begin(),cnt=0;
    while(!mst.empty()){
        auto it = mst.find(val);
        while(it!=mst.end()){
            mst.erase(it);
            val +=1;
            it = mst.find(val);   
        }
        cnt++;
        val = *mst.begin();

    }
    cout << cnt << endl;
    
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