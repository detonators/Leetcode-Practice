#include <bits/stdc++.h>
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long a;
    cin >> a;

    while (a != 1) {
        cout << a << " ";
        if (a % 2 == 0) {
            a /= 2;
        } else {
            a = a * 3 + 1;
        }
    }
    cout << 1 << "\n";  // Finally print 1

    return 0;
}
