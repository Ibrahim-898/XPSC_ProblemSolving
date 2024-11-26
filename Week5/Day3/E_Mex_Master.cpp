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
        int arr[n],one=0,zero=0,greaterone=0;
        for(int i=0;i<n;i++){
            cin >> arr[i];
            if(arr[i]>1){
                greaterone++;
            }
            else if(arr[i]==1){
                one++;
            }
            else zero++;
        }
        sort(arr,arr+n);
        int posinum=greaterone+one;
        if(arr[0]!=0){
            cout << 0 << endl;
        }
        else
        {
            if(zero==posinum+1 || zero<=posinum) cout << 0 << endl;
            else{
                if(greaterone>=1 && one>=1) cout << 1 << endl;
                else if(one>1 && greaterone==0) cout << 2 << endl; 
                else 
                {
                    if(arr[n-1]==1)
                    cout << arr[n-1]+1 << endl;
                    else
                    cout << 1 << endl;
                }
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