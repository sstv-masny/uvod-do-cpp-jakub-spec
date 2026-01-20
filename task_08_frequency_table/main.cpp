
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

    return 0;
}
