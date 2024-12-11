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
    ll n;
    cin >> n;
    bitset<64> b(n);
    vector<unsigned long long> ans;
    unsigned long long num = b.to_ullong();
    
    for(int i=63;i>=0;i--){
        if(b[i]==1){
            bitset<64> temp;
            temp=b;
            temp[i]=0;
            num = temp.to_ullong();
            if(num>0) ans.push_back(num);

        }
    }
    ans.push_back(b.to_ullong());
    cout << ans.size() << endl;
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