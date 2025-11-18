#include <iostream>
#include <string>
using namespace std;

int main()
{
    // printing  subarray
    int start, end;
    int array[10] = {1, 2, 3, 4, 5};
    int n = 5;
    for (start = 0; start < n; start++)
    {
        for (int end = start; end < n; end++)
        {
            for (int i = start; i <= end; i++)
            {
                cout << array[i];
            }
            cout << " ";
        }
        cout << endl;
    }
}