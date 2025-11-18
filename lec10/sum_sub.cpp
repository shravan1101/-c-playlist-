#include <iostream>
#include <string>
#include <climits>

using namespace std;

int main()
{
    // printing  subarray
    int start, end;
    int array[10] = {1, 2, 3, 4, 5};
    int n = 5;
    int MS = INT_MIN;
    int CS = 0;
    // CUrrent_ssum and Maximum sum
    for (start = 0; start < n; start++)
    {
        CS = 0;
        for (int end = start; end < n; end++)
        {
            CS += array[end];
            MS = max(CS, MS);
        }
        cout << endl;
    }
    cout << " the MAX SUm is " << MS << endl;
    return 0;
}