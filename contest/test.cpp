#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    long long x;
    int count = 0;

    for (int i = 0; i < N; i++) {
        cin >> x;

        // check if x is good
        if ((x != 0 && 18 % x == 0) || (x % 45 == 0)) {
            count++;
        }
    }

    cout << count;
    return 0;
}
