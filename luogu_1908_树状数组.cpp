#include<bits/stdc++.h>
#define int long long 
#define maxn 500005
using namespace std;
int n,tree[maxn],a[maxn],sum,b[maxn];
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
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		b[i]=a[i];
	}
	sort(b+1,b+1+n);
	int m=unique(b+1,b+n+1)-(b+1);
	for(int i=1;i<=n;i++){
		a[i]=lower_bound(b+1,b+1+m,a[i])-b;
	}
	for(int i=n;i>0;i--){
		add(a[i],1);
		sum+=query(a[i]-1);
	}
	cout<<sum;
	return 0;
}

