#include<bits/stdc++.h>
#define int long long
#define maxn 10004
using namespace std;
int n,dp[maxn],in[maxn],out[maxn],t[maxn];
vector<int>e[maxn];
queue<int>q;
signed main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		int id,u;
		cin>>id>>t[i];
		while(cin>>u&&u!=0){
			e[i].push_back(u);
			in[u]++;out[i]++;
		}
	}
	
	for(int i=1;i<=n;i++){
		if(in[i]==0){
			q.push(i);
			dp[i]=t[i];
		}
	}
	
	//memset(dp,0x3f,sizeof(dp));
	
	while(!q.empty()){
		int u=q.front();q.pop();
		for(auto x:e[u]){
			dp[x]=max(dp[x],dp[u]+t[x]);
			in[x]--;
			if(in[x]==0)q.push(x);
		}
	}
	
	int ans=0;
	for(int i=1;i<=n;i++){
		if(out[i]==0)ans=max(ans,dp[i]);
	}
	
	cout<<ans;
	return 0;
}
