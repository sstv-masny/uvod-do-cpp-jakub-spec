
#include <iostream>
using namespace std;

int main() {

    long long n = 0;
    cout << " zadaj cislo ";
    cin >> n;
    do {
        cout << n % 10;

        n /= 10;

    } while (n > 0);

    // TODO: reverse using % and /, not strings
    return 0;
}
