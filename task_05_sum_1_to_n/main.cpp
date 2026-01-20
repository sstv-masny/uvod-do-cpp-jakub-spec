
#include <iostream>
using namespace std;
int main() {
    long long n, i = 1, sum = 0;
    cout << " zadaj cislo ";
    cin >> n;

    for (i; i <= n; i++)
        sum = sum + i;
    cout << " sucet cisel 1-n je: " << sum;
    return 0;
}
