
#include <iostream>
using namespace std;

int main() {

    long long a, b, c;
    cout << "zadaj tri cisla";
    cin >> a >> b >> c;
    long long min = a;

    if (b < min) {
        min = b;
    }

    if (c < min) {
        min = c;
    }
    cout << " najmensie cislo je: " << min;
    return 0;
}
