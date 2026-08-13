#include <iostream>

using namespace std;

void pqueue(char chi[], int n, int m) {

    for (int sec = 0; sec < m; sec++) {

        for (int i = 0; i < n - 1; i++) {

            if (chi[i] == 'B' && chi[i + 1] == 'G') {
                char temp = chi[i];
                chi[i] = chi[i + 1];
                chi[i + 1] = temp;
                i++;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cout << chi[i];
    }
    cout << endl;
}

int main() {
    int n, m;
    cin >> n >> m;

    char chi[n];
    for (int i = 0; i < n; i++) {
        cin >> chi[i];
    }

    pqueue(chi, n, m);

    return 0;
}