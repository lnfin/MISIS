#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

typedef long long ll;

int main() {
	ll t;
	cin >> t;
	ll n;
	ll x1 = 0;
	ll x2 = 0;
	ll y1 = 0;
	ll y2 = 0;
	ll x3 = 0;
	ll y3 = 0;
	ll x4 = 0;
	ll y4 = 0;
	ll k = 1;
	while (t--) {
		cin >> n;
		string inp;
		for (ll i = 0;i < n;i++) {
			cin >> inp;
			for (ll j = 0;j < inp.length();j++) {
				if (inp[j] == '*') {
					if (k == 1) {
						x1 = i;
						y1 = j;
						k += 1;
					}
					else if (k==2) {
						x2 = i;
						x2 = j;
						k = 1;
					}
				}
			}
		}
		if ((x1 != x2) && (y1 != y2)) {
			x3 = min(x1, x2);
			y3 = min(x1, x2);
			x4 = max(x1, x2);
			y4 = max(y1, y2);
		}
		else {
			if (x1 == x2) {
				if ((x1 + 1) < n) {
					x3 = x1 + 1;
					x4 = x1 + 1;
				}
				else {
					x3 = x1 - 1;
					x4 = x1 - 1;
				}
				y3 = min(y1, y2);
				y4 = max(y1, y2);

			}
			else {
				if ((y1 + 1) < n) {
					y3 = y1 + 1;
					y4 = y1 + 1;
				}
				else {
					y3 = y1 - 1;
					y4 = y1 - 1;
				}
				x3 = min(x1, x2);
				x4 = max(x1, x2);
			}
		}
		for (ll i = 0;i < n;i++) {
			for (ll j = 0;j < n;j++) {
				if (((i == x1) && (j == y1)) || ((i == x2) && (j == y2)) || ((i == x3) && (j == y3)) || ((i == x4) && (j == y4))) {
					cout << '*';
				}
				else {
					cout << '.';
				}
			}
			cout << '\n';
		}
	}
	cin >> t;
}		
