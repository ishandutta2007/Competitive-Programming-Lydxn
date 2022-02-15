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

int ans[10000];
int mp[128] = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 4, -1, -1, -1, -1, 3, -1, -1, -1, -1, -1, -1, -1, 1, 5, -1, 0, -1, -1, -1, -1, 6, -1, 2, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
int L[7][7] = {{0, 6, 1, 6, 5, 6, 0}, {6, 1, 6, 2, 6, 0, 1}, {1, 6, 2, 6, 3, 6, 2}, {6, 2, 6, 3, 6, 4, 3}, {5, 6, 3, 6, 4, 6, 4}, {6, 0, 6, 4, 6, 5, 5}, {0, 1, 2, 3, 4, 5, 6}};

int main() {
	cin.sync_with_stdio(0);
	cin.tie(0);

	int N; string P;
	cin >> N >> P;
	for (int i = 0; i < N; i++) ans[i] = mp[P[i]];
	for (int i = N - 1; i; i--)
		for (int j = 0; j < i; j++)
			ans[j] = L[ans[j]][ans[j + 1]];
	cout << "ROYGBPW"[ans[0]] << '\n';
	return 0;
}
