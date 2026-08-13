#include <iostream>
using namespace std;

int main() {
    int count;
    int num;
    int balance = 0;
    int oddIndex = 0;
    int evenIndex = 0;
    
    cin >> count;
    

    for (int i = 1; i <= count; ++i) {
        
        cin >> num;
        
        if (num % 2 == 0)
        {
            ++balance;
            evenIndex = i;
            
        }
        else {
            
            --balance;
            oddIndex = i;
            
        }
        
    }

    cout << (balance > 0 ? oddIndex : evenIndex) << endl;
    
    
    return 0;
    
    
}