#include<bits/stdc++.h>
#define int long long 
using namespace std;
int T,n,m;
void solve(int n){
	int e=n*(n-1)/2;
	int tot=1<<e;
	int top=0;
	int se=0,so=0;
	for(int i=0;i<tot;i++){
		int a[20]={0};
		top=0;
		for(int j=0;j<n;j++){
			for(int k=j+1;k<n;k++){
				if((i>>top)&1){
					a[j]++;
					a[k]++;
				}
				top++;
			}
		}
		int even=1,odd=1;
		for(int j=0;j<n;j++){
			if(a[j]&1)even=0;
			else odd=0;
		}
		se+=even,so+=odd;
	}
	cout<<se<<" "<<so<<endl;
}
signed main(){
	for(int i=1;i<=6;i++){
		solve(i);
	}
	return 0;
}
