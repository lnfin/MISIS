#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int ki = 1;
    int kj = 1;
    int a;
    for (int i=0;i<5;i++){
        for (int j=0;j<5;j++){
            cin >> a;
            if (a == 1){
                ki = i + 1;
                kj = j + 1;
            }
        }
    }
    cout << abs(ki - 3) + abs(kj - 3);

    return 0;
}