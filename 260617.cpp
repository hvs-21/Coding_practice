#include<bits/stdc++.h>
#define int long long 
#define maxn 5005
using namespace std;
int n,ans,a[maxn];
signed main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=0;i<60;i++){
		int count=0;
		for(int j=1;j<=n;j++){
			if(a[j]&(1LL<<i))count++;
		}
		if(count%3==1){
			ans|=(1LL<<i);
		}
	}
	cout<<ans;
}
