#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define ld  long double
#define ios() ios_base:: sync_with_stdio(0);cin.tie(0);
bool cmp(const pair<int,int> &a,const pair<int,int> &b) {
    if(a.first!=b.first)
        return (a.first<b.first);
    else
        return (a.second>b.second);
}
int fact(int n)
{
    return (n==1) ? 1: n * fact(n - 1);
    // ?
}
int main()
{
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        for(int i=1; i<s.size(); i++) {
              int j=i;
            while(j>0 && s[j]-1>s[j-1]) {
                s[j]--;
                swap(s[j], s[j-1]) ;
                j--;
            }

        }
        cout << s << endl;
    }
}