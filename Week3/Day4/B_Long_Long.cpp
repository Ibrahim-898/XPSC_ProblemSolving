//Template 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define ios() ios_base:: sync_with_stdio(0);cin.tie(0);
bool cmp(const pair<int,int> &a,const pair<int,int> &b){
    return(a.first<b.first);
}
int main()
{
    ios();
    int t;
    cin >> t;
    while(t--)
    {
        ll n,sum=0;
        cin >> n;
        vector<ll> v(n);
        for(int i=0;i<n;i++){
            cin >> v[i];
            sum+=abs(v[i]);
        }
        int var=0,cng=0;
        for(int i=0;i<n;i++){
            if(v[i]<0) var=1;
            else if(v[i]>0){
                if(var) {
                    cng++;
                    var=0;
                }  
            }
            if(i==n-1 && var) cng++;
        }
        cout << sum << " " <<  cng << endl;
        
    }

    }