#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n,cnt=0;
        cin >> n;
        vector<long long> v(n);
        for(int i=0;i<n;i++){
            cin >> v[i];
        }
        map<long long,long long > mp;
        for(int i=0;i<n;i++){
            int dif=v[i]-i;
            mp[dif]++;
        }
    for(auto u: mp){
        if(u.second>1) cnt+=(u.second*(u.second-1))/2;
    }
    cout << cnt << endl;
    }
}