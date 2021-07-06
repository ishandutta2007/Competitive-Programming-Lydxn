#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<ll, int> plli;
typedef pair<int, ll> pill;
typedef pair<pair<int, int>, int> piii;

const int INF = 0x3f3f3f3f;
const ll INFL = 0x3f3f3f3f3f3f3f3fLL;
const int MOD = 1e9 + 7;

template <class T, class C = less<T>>
using ordered_set = tree<T, null_type, C, rb_tree_tag, tree_order_statistics_node_update>;

int a[200001], p[200001];

int main() {
	cin.sync_with_stdio(0);
	cin.tie(0);

	int t, n, k;
	cin >> t;
	while (t--) {
		cin >> n >> k;
		for (int i = 1; i <= n; i++) cin >> a[i];
		for (int i = 2; i < n; i++) p[i] = p[i - 1] + (a[i] > a[i - 1] && a[i] > a[i + 1]);
		int ans = -1, l = -1;
		for (int i = 1; i <= n - k + 1; i++)
			if (p[i + k - 2] - p[i] > ans)
				ans = p[i + k - 2] - p[i], l = i;
		cout << ans + 1 << ' ' << l << '\n';
	}
	return 0;
}
