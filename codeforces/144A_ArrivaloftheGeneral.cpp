#include <iostream>
using namespace std;

int main()
{
    int len, val;
    cin >> len >> val;
    
    int minVal(val), maxVal(val);
    int minPos(0), maxPos(0);
    
    for (int pos = 1; pos < len; ++pos)
    {
        cin >> val;
        
        if (val > maxVal)
        {
            maxVal = val;
            maxPos = pos;
        }
        if (val <= minVal)
        {
            minVal = val;
            minPos = pos;
        }
    }

    int moves = maxPos + (len - 1 - minPos);
    if (minPos < maxPos)
    {
        moves--;
    }
    
    cout << moves << endl;
    return 0;
}