#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,u,a,b,c;
void solve(int x){
	a=0,b=0;
	for(int i=2;i*i<=x;i++){
		if(x%i==0){
			a=i;
			x/=i;
			break;
		}
	}
	for(int i=a+1;i*i<=x;i++){
		if(x%i==0){
			b=i;
			x/=i;
			break;
		}
	}
	if(a!=0&&b!=0&&x>1){
		if(x!=a&&x!=b){
			c=x;
			cout<<"YES"<<endl;
			cout<<a<<" "<<b<<" "<<c<<endl;
		}
		else cout<<"NO"<<endl;
	}
	else cout<<"NO"<<endl;
}
signed main(){
	cin>>n;
	while(n--){
		cin>>u;
		solve(u);
	}
	return 0;
}
