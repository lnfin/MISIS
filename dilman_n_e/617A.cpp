#include<iostream>
using namespace std;
int main() {
	int x;
	cin >> x;
	int n = x / 5;
	if (x % 5 == 0) cout << n;
	else cout << n + 1;
}