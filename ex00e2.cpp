#include <cstdio>
#include <algorithm>
using namespace std;
int a[110][110], n, m;
int main() {
	// freopen("input.in", "r", stdin);
	// freopen("output.out", "w", stdout);
	int r, r1, r2, c1, c2;
	scanf("%d %d %d", &n, &m, &r);
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			scanf("%d", &a[i][j]);
		}
	}
	while (r--) {
		scanf("%d %d %d %d", &r1, &c1, &r2, &c2);
		if (r1 > r2 || c1 > c2) {
			printf("INVALID\n");
			continue;
		}
		if (r1 > n || r2 < 1 || c1 > m || c2 < 1) {
			printf("OUTSIDE\n");
			continue;
		}
		
		if (r1 < 1)
			r1 = 1;
		if (c1 < 1)
			c1 = 1;
		if (r2 > n)
			r2 = n;
		if (c2 > m)
			c2 = m;
		int MAX = a[r1][c1];
		for (int i = r1; i <= r2; i++) {
			for (int j = c1; j <= c2; j++) {
				MAX = max(MAX, a[i][j]);
			}
		}
		printf("%d\n", MAX);
	}
}