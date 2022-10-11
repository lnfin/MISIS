#include <iostream>

using namespace std;

int count=0;
int len=0;

int count_digit(int num)
{
    if(num>0)
    {

        if(num%10==0) count++;
        len++;

        count_digit(num/10);
    }
    return count;
}

int main() {
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        count = 0;
        len = 0;
        int k =count_digit(n);
        cout << len - k << '\n';
        if (n >= 10000){
            cout << n / 10000 << "0000 ";
        }
        if (n >= 1000 && ((n / 1000)%10) != 0){
            cout << (n / 1000)%10 << "000 ";
        }
        if (n >= 100 && ((n / 100)%10) != 0){
            cout << (n / 100)%10 << "00 ";
        }
        if (n >= 10 && ((n / 10)%10) != 0){
            cout << (n / 10)%10 << "0 ";
        }
        if (n % 10 != 0){
            cout << n % 10;
        }
        cout << endl;
    }
    return 0;
}