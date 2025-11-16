#include <iostream>
#include <climits>
using namespace std;

int main() {
    int arr[7] = {120, 250, 14, 500, -2, 999, 42};
    int size = 7;
    int small_check = INT_MAX;
//  int largest_check = INT_MIN;
    for (int i = 0; i < size; i++) {
        if (arr[i] < small_check)
            small_check = arr[i];
    }

    cout << "Smallest = " << small_check << endl;
}
// min(arr[i],smallest)
// max(arr[i],largest)