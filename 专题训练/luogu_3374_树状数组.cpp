#include<bits/stdc++.h>
#define int long long
#define maxn 500005
using namespace std;
int n,m,tree[maxn];
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
		int u;
		cin>>u;
		add(i,u);
	}
	
	while(m--){
		int id,x,y;
		cin>>id>>x>>y;
		if(id==1){
			add(x,y);
		}
		else if(id==2){
			cout<<query(y)-query(x-1)<<endl;
		}
	}
	return 0;
}
