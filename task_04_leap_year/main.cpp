
#include <iostream>
using namespace std;
int main() {
    int rok;
    cout << " zadaj rok " << endl;
    cin >> rok;

    if (rok % 4 == 0) {
        cout << " rok je priestupny ";
    } else {
        cout << " rok nie je priestupny ";
    }

    // TODO: implement leap rule and print YES/NO
    return 0;
}
