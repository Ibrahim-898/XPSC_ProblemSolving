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
        vector<int> v;
        int x=1,y=n*n;
        for(int i=1;i<=n*n;i++){
            if(i%2==0){
                v.push_back(y);
                y--;
            }
            else{
             v.push_back(x);
              x++;
            }
        }
        int m=0;
        for(int i=1;i<=n;i++){
            if(i%2==1){
                for(int j=m;j<m+n;j++){
                    cout << v[j] << " ";
                }
                cout << endl;
                    m+=n;
                
            }
            else
            {
                for(int j=m+n-1;j>=m;j--){
                    cout << v[j] <<" ";
            }
            cout << endl;
            m+=n;
            }
        }
    
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