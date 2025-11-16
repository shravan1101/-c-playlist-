#include <iostream>
using namespace std;

// linear searc
// reverser of arry

void reverseArray (int arr[] , int size)
{
    int start =0 , end =size -1;
    while (start<end)
    {
        swap(arr[start] , arr[end]);
        start++;
        end--;
    }
    
}

int main()
{
    int size=7;
    int arr[10] = {12,3,13,5,2,4,5};
    reverseArray(arr ,7);

    for (int i = 0; i < size; i++)
    {
        cout<< arr[i] <<endl;
    }
    
}