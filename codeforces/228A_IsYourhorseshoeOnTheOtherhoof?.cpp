#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n = 4;
    int u = 0;
    long long a[15];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);

    for (int i = 0; i < n - 1; i++) {
        if (a[i] != a[i + 1]) {
            u++;
        }
    }
    u++;

    cout << n - u << endl;
    return 0;
}