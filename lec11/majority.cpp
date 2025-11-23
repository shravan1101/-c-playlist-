#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int i, j, target = 9;
    int arr[4] = {2, 7, 11, 15};
    int n = 4;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; i++)
        {
            if (arr[i] + arr[j] == target)
            {
                cout << "index" << i << j; 
                cout << "sum of" << arr[i] << "+" << arr[j] << "=" << target << endl;
            }
        }
    }

    return 0;
}