#include <iostream>
using namespace std;

int main() {
    int n, groupSize;
    int groupCount[5] = {0};

    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> groupSize;
        groupCount[groupSize]++;
    }

    int taxis = groupCount[4];
    taxis += groupCount[3];
    groupCount[1] = max(0, groupCount[1] - groupCount[3]);

    taxis += groupCount[2] / 2;
    if (groupCount[2] % 2 == 1) {
        taxis++;
        groupCount[1] = max(0, groupCount[1] - 2);
    }

    if (groupCount[1] > 0) {
        taxis += (groupCount[1] + 3) / 4;
    }

    cout << taxis << endl;
    return 0;
}