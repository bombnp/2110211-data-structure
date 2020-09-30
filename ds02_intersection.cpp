#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
	// freopen("input.in", "r", stdin);
	// freopen("output.out", "w", stdout);
	int i, j, n, m, x;
	vector<int> a, b, intersect;
	scanf("%d %d", &n, &m);
	for (i = 0; i < n; i++) {
		scanf("%d",&x);
		a.push_back(x);
	}
	for (i = 0; i < m; i++) {
		scanf("%d",&x);
		b.push_back(x);
	}
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	i = 0;
	j = 0;
	while (i < n && j < m) {
		
		if (a[i] < b[j] || (i < n-1 && a[i] == a[i+1])) {
			i++;
		} else if (a[i] > b[j] || (j < m-1 && b[j] == b[j+1])) {
			j++;
		} else {
			intersect.push_back(a[i]);
			i++;
			j++;
		}
	}
	for (int e : intersect) {
		printf("%d ", e);
	}
	return 0;
}