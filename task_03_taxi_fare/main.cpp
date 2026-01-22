
#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;
int main() {
    float km, suma = 0;

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

    cout << " zadaj kilometre " << endl;
    cin >> km;
    if (km <= 2) {
        suma = 4;
        cout << " cena za taxik " << suma;
    } else {
        suma = 4 + 1.5 * ceil(km - 2);
        cout << " cena za taxik je " << suma;
    }

    // TODO: compute the fare as specified and print with two decimals

    return 0;
}
