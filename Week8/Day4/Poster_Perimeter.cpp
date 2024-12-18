#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n,m,k,ans=INT_MAX;
	    cin >> n >> m >> k;
	    for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
			int	per = 2*(i+j);
			ans = min(abs(per-k),ans);

			}
	       
	    }
		cout << ans << endl;
	
	}

}