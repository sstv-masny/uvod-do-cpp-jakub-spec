
#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;
int main() {
    long long km, suma = 0;
    cout << " zadaj najazdene km ";
    cin >> km;

    if (km <= 2) {
        suma = 4;
        cout << " cena za taxik je{} " << suma << " eura ";
    }

    else {
        suma = 4.00 + 1.50 * ceil(km - 2);
        cout << "cena za taxik je:" << suma << "eur";
    }

    return 0;
}
