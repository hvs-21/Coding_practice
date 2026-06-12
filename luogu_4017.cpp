#include<bits/stdc++.h>
#define int long long
#define maxn 5007
#define mod 80112002 
using namespace std;
int n,m,in[maxn],out[maxn],dp[maxn],ans;
vector<int>e[maxn];
queue<int>q;
signed main(){
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		int ux,uy;
		cin>>ux>>uy;
		e[ux].push_back(uy);
		in[uy]++;
		out[ux]++;
	}
	
	for(int i=1;i<=n;i++)
		if(in[i]==0){
			q.push(i);
			dp[i]=1;
		}
	
	while(!q.empty()){
		int u=q.front();q.pop();
		for(auto x:e[u]){
			in[x]--;
			dp[x]+=dp[u];
			dp[x]%=mod;
			if(in[x]==0)q.push(x);
		}
	}
	
	for(int i=1;i<=n;i++){
		if(out[i]==0){
			ans+=dp[i];
			ans%=mod;
		}
	}
	
	cout<<ans;
	return 0;
}
