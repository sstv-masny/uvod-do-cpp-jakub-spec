
#include <iostream>
using namespace std;
int main() {

    long long a, b, c;

    cout << " zadaj tri cisla " << endl;
    cin >> a >> b >> c;

    long long min = a;
    if (b < min) {
        min = b;
    }
    if (c < min) {
        min = c;
    }

    cout << " najmensie cislo je " << min;
    // TODO: print the minimum of a, b, c
    return 0;
}
