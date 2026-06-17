#include<bits/stdc++.h>
#define maxn 500005
#define int long long
using namespace std;
int n,m,tree[maxn],a[maxn];
int lowbit(int x){return x&(-x);}
void add(int x,int k){
	for(int i=x;i<=n;i+=lowbit(i))tree[i]+=k;
}

int query(int x){
	int ans=0;
	for(int i=x;i>0;i-=lowbit(i))ans+=tree[i];
	return ans;
}

signed main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		int u=a[i]-a[i-1];
		add(i,u);
	}
	while(m--){
		int id,x,y,u;
		cin>>id>>x;
		if(id==1){
			cin>>y>>u;
			add(x,u);add(y+1,-u);
		}
		else if(id==2){
			cout<<query(x)<<endl;
		}
	}
	return 0;
}
