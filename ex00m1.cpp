#include <cstdio>
#include <algorithm>
#include <queue>
using namespace std;
int main() {
	// freopen("input.in", "r", stdin);
	// freopen("output.out", "w", stdout);
  int n, m, t_current, t_cook;
  priority_queue<pair<int, int> > q;
  scanf("%d %d", &n, &m);
  for (int i = 0; i < n; i++) {
    scanf("%d", &t_cook);
    q.push({0, t_cook});
  }
  while (m--) {
    pair<int, int> p = q.top();
    q.pop();

    t_current = -p.first;
    t_cook = p.second;

    printf("%d\n", t_current);
    q.push({-(t_current+t_cook), t_cook});
  }
  return 0;
}