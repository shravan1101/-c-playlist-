#include <iostream>
using namespace std;

void pass(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = arr[i] * 2;
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}

int main()
{
    int arr[15];
    for (int i = 0; i < 15; i++)
    {
        arr[i] = i + 1;  
    }

    pass(arr, 15);

    cout << "this is main fuctions" << endl;
    for (int i = 0; i < 15; i++)
    {
        arr[i] = arr[i] * 2;
    }

    for (int i = 0; i < 15; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}