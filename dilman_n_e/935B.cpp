#include <iostream>
#include <string>
 
using namespace std;
 
typedef long long ll;
 
int main() {
	ll n;
	cin >> n;
	string inp;
	cin >> inp;
	ll k = 0;
	ll curx = 0;
	ll cury = 0;
	if (inp[0] == 'U') {
		k = 0;
		cury += 1;
	}
	else {
		k = 1;
		curx += 1;
	}
 
	ll newk = 0;
	ll cnt = 0;
	for (ll i = 1;i < inp.length();i++) {
		if (inp[i] == 'U') cury += 1;
		else curx += 1;
 
		if (curx > cury) newk = 1;
		else if (curx == cury) newk = -1;
		else newk = 0;
 
		if (newk == -1) continue;
 
		if (newk != k) {
			cnt += 1;
		}
		k = newk;
	}
	cout << cnt;
	return 0;
}
