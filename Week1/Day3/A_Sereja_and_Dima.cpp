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
int fact(int n)
{
    return (n==1) ? 1: n * fact(n - 1); 
    // ? :
}
const int N=100;
void solve() {
    int n,sereja=0,dima=0;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    int i=0,j=n-1,moves=0;
    while(i<=j){
        if(v[i]>=v[j]){
            if(moves%2==0) 
                sereja+=v[i];
            else dima+=v[i];
            moves++;
            i++;
        }
        else{
             if(moves%2==0) sereja+=v[j];
            else dima+=v[j];
            moves++;
            j--;
        }
    }
    cout << sereja << " " << dima << endl;
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