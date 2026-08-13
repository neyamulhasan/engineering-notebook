#include <iostream>
#include <unordered_set>
#include <cctype>

using namespace std;

int main() {
    int n; 
    cin >> n;
    
    string str;
    cin >> str;
    
    unordered_set<char> letters;
    
    for (char c : str) {
        letters.insert(tolower(c)); 
    }
    
    if (letters.size() == 26) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}