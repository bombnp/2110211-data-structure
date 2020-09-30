#include <iostream>
#include <algorithm>
#include <map>
#include <string>
using namespace std;
map<string, int> m;
int main() {
	int n;
	string str;
	cin >> n;
	while (n--) {
		cin >> str;
		m[str]++;
	}
	for (auto &i : m) {
		if (i.second > 1) {
			cout << i.first << " " << i.second << endl;
		}
	}
	return 0;
}