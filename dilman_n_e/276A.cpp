#include <iostream>

using namespace std;


int main() {
    long long n, k;
    cin >> n >> k;
    long long mx = -1000000000000;
    for (int i=0;i<n;i++){
        long long f, t;
        cin >> f >> t;
        if ((t-k) < 0) mx = max(mx, f);
        else mx = max(mx, f-(t-k));
    }
    cout << mx;
    return 0;
}