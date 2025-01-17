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
    int n,k,f=1,indx1=0,indx2=n-1;
    cin >> n >> k;
    vector<int> v(n);
    map<int,int> prefix,subarray,suffix;
    for(int i=0;i<n;i++){
        cin >> v[i];
        prefix[v[i]]++;
        suffix[v[i]]++;
        if(f){
            if(v[i]==k){
                indx1 = i;
                f=0;
            }
            
        }
        if(v[i]==k) indx2=i;
        
    }
    int cnt=0;
    bool flag2=true;
    for(auto [x,y]:prefix){
        if(prefix[k]<y) flag2=false;
    }
    if(flag2){
        cout << 0 << endl;
        return;
    }
    int i=0;
    bool flag = true;
    while(i<indx2){
        prefix[v[i]]--;
        flag=true;
       for(auto [x,y]:prefix){
        if(prefix[k]<y){
            flag=false;
        }
      }
      if(flag){
        cout << 1 << endl;
        return;
    }
      i++;
    }
    
    int j=n-1;
    bool flag1=false;
    while(j>indx1){
        suffix[v[j]]--;
        flag1=true;
        for(auto [x,y]:suffix){
            if(suffix[k]<y){
                flag1=false;
            }
        }
        if(flag1){
        cout << 1 << endl;
        return;
    }
        j--;
    }

    cout << 2 << endl;
    
    

    
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