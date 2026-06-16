#include<bits/stdc++.h>
#define int long long
using namespace std;
string s;
signed main(){
	cin>>s;
	int count=0,len=s.size();
	for(int i=0;i<len;i++){
		if(s[i]=='1')count++;
	}
	if(!(count&1)){
		s[0]=(s[0]=='1')?'0':'1';
	}
	int st=0;
	for(int i=0;i<len;i++){
		if(s[i]=='0')cout<<++st<<" ";
		else cout<<(1LL<<59)+(++st)<<" ";
	}
	return 0;
}
