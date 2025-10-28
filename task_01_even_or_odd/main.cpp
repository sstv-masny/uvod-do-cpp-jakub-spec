
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Zadaj n";
    cin >> n;

    if (n % 2 == 0) {
        cout << "cislo je parne";
    } else {
        cout << "cislo ne neparne";
    }

    return 0;
}
