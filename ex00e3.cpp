#include <cstdio>
#include <algorithm>
#include <map>
using namespace std;
map<int, int> m;
int main() {
	// freopen("input.in", "r", stdin);
	// freopen("output.out", "w", stdout);
	int n, x;
	scanf("%d",&n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &x);
		if (x < 1 || x > n || m.find(x) != m.end()) {
			printf("NO\n");
			return 0;
		}
		m[x] = 1;
	}
	printf("YES\n");
	return 0;
}