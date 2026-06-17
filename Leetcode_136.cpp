#include<bits/stdc++.h>
#define int long long 
using namespace std;
int ans,n;
signed main(){
	while(cin>>n){
		ans^=n;
	}
	cout<<ans;
	return 0;
}
