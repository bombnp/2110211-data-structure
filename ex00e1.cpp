#include <cstdio>
using namespace std;
int main() {
	int h, m, x;
	scanf("%d %d %d", &h, &m, &x);
	h = (h+(m+x)/60)%24;
	m = (m+x)%60;
	printf("%02d %02d", h, m);
	return 0;
}