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
    cin >>n;
    vector<set<int>> v;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        set<int> st;
        for(int i=2;i*i<=x;i++){
            if(x%i==0){
                 st.insert(i);
                if(x/i!=i){
                    st.insert(x/i);
                }
        
            }

        }
        v.push_back(st);
    }
    for(auto u:v){
        for(auto x:u){
            cout << x << " ";
        }
        cout << endl;
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