
#include <iostream>
#include <string>
#include <vector>

using namespace std;
int main() {
    int number[] = {1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 1, 2, 3, 4, 5};

    cout << sizeof(number) / 4 << '\n';

    for (int i = 0; i < 20; i++) {
        cout << number[i] << '\n';
    }

    using namespace std;
    int main() {
        int n, pocet[100] = {0};
        cout << " nacitaj pocet cisel" << endl;
        cin >> n;

        cout << " nacitaj cisla v rozsahu od 0 do 100 " << endl;
        for (int i = 0; i < n; i++) {
            int hodnota;
            cin >> hodnota;
            if (hodnota >= 0 && hodnota <= 100) {
                pocet[hodnota]++;
            }
        }
        cout << " pocet cisel s rovnakou hodnotou" << endl;
        for (int hodnota = 0; hodnota <= 100; hodnota++) {
            if (pocet[hodnota] > 0)
                cout << hodnota << " " << pocet[hodnota] << endl;
        }

        // TODO: read n values in [0,100], count, and print only those with count>0 in ascending value

        return 0;
    }
