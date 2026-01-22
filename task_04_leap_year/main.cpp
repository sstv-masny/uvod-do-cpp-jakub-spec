
#include <iostream>
using namespace std;
int main() {
<<<<<<< HEAD
    long long rok;
    cout << " zadaj rok ";
    cin >> rok;

    if (rok % 4 == 0)
        cout << " rok je priestupny ";

    else
        cout << " rok nie je prestupny ";

=======
    int rok;
    cout << " zadaj rok " << endl;
    cin >> rok;

    if (rok % 4 == 0) {
        cout << " rok je priestupny ";
    } else {
        cout << " rok nie je priestupny ";
    }

    // TODO: implement leap rule and print YES/NO
>>>>>>> 24ec0ed506d95fda5dbcab5f80477e1074c56fe3
    return 0;
}
