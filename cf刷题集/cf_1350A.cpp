#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m,k;

int find(int x){
	int tx;
	for(int i=2;i<=x;i++){
		if(x%i==0){
			tx=i;
			break;
		}
	}
	return tx;
}
signed main(){
	cin>>n;
	while(n--){
		cin>>m>>k;
		int t=find(m);
		int ans=m+t+(k-1)*2;
		cout<<ans<<endl;
	}
	return 0;
}
