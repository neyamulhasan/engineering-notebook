#include <iostream>
#include <string>
using namespace std;

int main() {
    string input, result;
    cin >> input;

    for (size_t i = 0; i < input.size(); ) {
        if (input.substr(i, 3) == "WUB") {
            i += 3;
            if (!result.empty() && result.back() != ' ') result += " ";
        } else {
            result += input[i++];
        }
    }

    cout << result << endl;
    return 0;
}