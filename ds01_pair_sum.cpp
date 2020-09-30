#include <cstdio>
#include <algorithm>
using namespace std;
int exists[2000010];
int a[1000010];
int q[1000010];
int found[1000010];
int main() {
	// freopen("input.in", "r", stdin);
	// freopen("output.out", "w", stdout);
	int n, m, diff;
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	for (int i = 0; i < m; i++) {
		scanf("%d", &q[i]);
	}

	sort(a,a+n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (q[j] < a[i])
				continue;
			diff = q[j]-a[i];
			if (exists[diff]) {
				found[j] = 1;
			}
		}
		exists[a[i]] = 1;
	}

	for (int i = 0; i < m; i++) {
		if (found[i]) {
			printf("YES\n");
		} else {
			printf("NO\n");
		}
	}

	return 0;
}