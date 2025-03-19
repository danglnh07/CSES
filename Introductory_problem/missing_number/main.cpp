#include <iostream>

using namespace std;

long long int sum, n = 0;
int item;

int main() {
    cin >> n;
    sum = (n * (n + 1)) / 2;

    for (int i = 0; i < n - 1; i++) {
        cin >> item;
        sum -= item;
    }

    cout << sum << "\n";

}