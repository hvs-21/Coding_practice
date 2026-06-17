#include<bits/stdc++.h>
#define int long long
#define maxn 105
using namespace std;
int n,in[maxn],a[maxn],atop;
vector<int>e[maxn];
queue<int>q;
signed main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		int u;
		while(cin>>u&&u!=0){
			e[i].push_back(u);
			in[u]++;
			
		}
	}
	
	for(int i=1;i<=n;i++){
		if(in[i]==0){
			a[++atop]=i;
			q.push(i);
		}
	}
	
	while(!q.empty()){
		int u=q.front();q.pop();
		for(auto x:e[u]){
			in[x]--;
			if(in[x]==0){
				q.push(x);
				a[++atop]=x;
			}
		}
	}
	
	for(int i=1;i<=n;i++)cout<<a[i]<<" ";
	return 0;
}
