#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		string s;
		cin >> s;
		// a -> [1, 25]
		// b -> [26, 51]
		// ...
		// z -> [625, 650]
		string letters = "";
		for (int i = 97; i < (int) 'a' + 26; i++) {
			letters += (char) i;
		}
		for (int i = 0, num = 1; i < 26 && num <= 650; i++, num += 25) {
			if (s[0] == letters[i]) {
				if (s[1] < s[0]) {
					cout << num + (s[1] - 'a') << '\n';		
				} else {
					cout << num + (s[1] - 'a') - 1 << '\n';		
				}
				break;
			}
		}
	}
	return 0;
}
