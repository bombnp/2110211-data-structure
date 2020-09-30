#include <cstdio>
#include <algorithm>
#include <map>
using namespace std;
map<long long, long long> p;
int main() {
	// freopen("input.in", "r", stdin);
	// freopen("output.out", "w", stdout);
	int i, j, m, n;
	long long f, s, a, b;
	scanf("%d %d", &n, &m);
	while (n--) {
		scanf("%lld %lld", &f, &s);
		p[s] = f;
	}
	while (m--) {
		scanf("%lld %lld", &a, &b);
		if (a == b || p[a] == 0 || p[b] == 0 || p[p[a]] == 0 || p[p[b]] == 0 || p[p[a]] != p[p[b]]) {
			printf("NO\n");
			continue;
		}
		printf("YES\n");
	}
	return 0;
}