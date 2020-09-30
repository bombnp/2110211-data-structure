#include <iostream>
#include <cstdio>
#include <algorithm>
#include <map>
#include <string>
#include <iomanip>
using namespace std;
map<string, pair<int,int> > cmap, tmap;
int main() {
	// freopen("input.in", "r", stdin);
	// freopen("output.out", "w", stdout);
	cout << std::fixed << std::setprecision(2);
	int n, x;
	string c, t;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> c >> t >> x;
		cmap[c].first += x;
		cmap[c].second++;
		tmap[t].first += x;
		tmap[t].second++;
	}
	for (auto &c : cmap) {
		cout << c.first << " " << c.second.first*1.0/c.second.second << endl;
	}
	for (auto &t : tmap) {
		cout << t.first << " " << t.second.first*1.0/t.second.second << endl;
	}
	return 0;
}