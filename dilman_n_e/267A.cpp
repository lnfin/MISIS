#include <iostream>

using namespace std;


int main() {
    int t;
    cin >> t;
    while (t--){
        int a, b;
        cin >> a >> b;
        int k = 0;
        int mx = max(a, b);
        int mn = min(a, b);
        while (mx > 0 && mn > 0){
            int op = (mx - mn) / mn + 1;
            k += op;
            int pr = mx - (op) * mn;
            mx = mn;
            mn = pr;
        }
        cout << k << '\n';
    }
    return 0;
}