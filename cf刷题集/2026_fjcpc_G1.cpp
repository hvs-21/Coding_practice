#include<bits/stdc++.h>
#define int long long 
using namespace std;
int T,n,m;
int quick(int x,int y){
	if(y==0)return 1%m;
	int ans=1;
	while(y>0){
		if(y&1)ans=ans*x%m;
		x=x*x%m;
		y>>=1;
	}
	return ans;
}
signed main(){
	cin>>T;
	while(T--){
		cin>>n>>m;
		int a=quick(2,(n-2)*(n-1)/2);
		if(n&1)cout<<a<<endl;
		else cout<<2*a%m<<endl;
	}
	return 0;
}
