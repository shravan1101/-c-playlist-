#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    int ms = INT_MIN, cs = 0;
    for (int val : arr)
    {
        cs = cs + val; 
        ms = max(cs, ms);

        if (cs < 0)
        {
            cs = 0;
        }
    }
    cout << "the max sum is " << ms;
    return 0;
}