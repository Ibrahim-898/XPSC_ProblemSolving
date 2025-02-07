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
    string s,a;
    cin >> n >> s;
   char arr[5][5] = {
        {'A', 'B', 'C', 'D', 'E'},
        {'F', 'G', 'H', 'I', 'J'},
        {'L', 'M', 'N', 'O', 'P'},
        {'Q', 'R', 'S', 'T', 'U'},
        {'V', 'W', 'X', 'Y', 'Z'}
    };
    for(int i=0;i<n;i++){
        int f=0;
         for (int k = 0; k < 5; k++) {
        for (int j = 0; j < 5; j++) {
            if(arr[k][j]==s[i] || (s[i]=='K' && arr[k][j]=='C')){
                for(int m=0;m<=k;m++){
                    a.push_back('*');
                }
                a.push_back(' ');
                for(int f=0;f<=j;f++){
                    a.push_back('*');
                }
                a.push_back(' ');  
                f=1;
                break;
                
            }
            if(f) break;
        }
    }
    }
   
    cout << a << endl;

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