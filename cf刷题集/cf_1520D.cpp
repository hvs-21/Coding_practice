#include<bits/stdc++.h>
#define int long long
#define maxn 200005
using namespace std;
int T, n, a[maxn], b[maxn], btop;
signed main() {
	cin >> T;
	while (T--) {
		cin >> n;
		for (int i = 1; i <= n; i++) {
			cin >> a[i];
			b[++btop] = a[i] + i;
		}
		sort(b + 1, b + 1 + btop);
		int ans, t = 0;
		for (int i = 1; i <= n; i++) {
			if (b[i] != b[i - 1] || i == 1) {
				t = 0;
			} else t++;
			ans += t;
		}
		cout << ans << endl;
	}
	return 0;
}
