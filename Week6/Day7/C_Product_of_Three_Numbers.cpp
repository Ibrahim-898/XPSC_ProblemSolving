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
    int n,a=-1;
    cin >> n;
    set<int> st;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            a = i;
            st.insert(i);
            n/=i;
            break;
        }
    }
    if(a==-1){
        cout << "NO" << endl;
        return;
    }
    for(int i=a+1;i*i<=n;i++){
        if(n%i==0){
            st.insert(i);
            st.insert(n/i);
            break;
        }
    }
    if(st.size()==3){
        cout << "YES" << endl;
        for(auto u:st){
            cout << u << " ";
        }
        cout << endl;
        return;
    }
    cout << "NO" << endl;
    
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
