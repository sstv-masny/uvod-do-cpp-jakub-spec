
#include <iostream>
using namespace std;
int main() {

    long long n, i = 1, sum = 0;
    cout << " zadaj cislo ";
    cin >> n;
    for (i; i <= n; i++) {
        sum = sum + i;
    }

    cout << " sucet cisel je " << sum;

    return 0;
    // TODO: compute sum 1..n (watch overflow; use 64-bit)
    return 0;
}
