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
    string s;
    cin >> s;
     char first= s[0],last = s.back();
    vector<pair<char,int>> v;
    for(int i=0;i<s.size();i++){
        v.push_back({s[i],i+1});
    }
    if(first<=last) sort(v.begin(),v.end());
    else sort(v.rbegin(),v.rend(),cmp);
    int i=0,j=v.size()-1;
    while(v[i].first!=first)i++;
    while(v[j].first!=last) j--;
    cout <<  abs(first-last) << " " <<  j-i+1 << endl;
    while(i<=j){
       if(v[i].second!=s.size()) cout << v[i].second  << " ";
        i++;
    }
    cout << s.size() <<  endl;
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