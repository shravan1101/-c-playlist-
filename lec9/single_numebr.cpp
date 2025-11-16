#include <iostream>
#include <vector>

using namespace std;
/*
✔ Quick XOR rules to remember

x ^ x = 0

x ^ 0 = x

XOR is commutative → a ^ b = b ^ a

XOR is useful in cryptography, bit manipulation, toggling bits.*/
int main()
{
    int ans = 0;
    vector<int> vec = {12, 12, 1, 3, 3};
    for (int x : vec)
    {
        cout << ans << "^" << x << "=";
        ans = ans ^ x;
        cout << ans << endl;
    }

    cout << "final ans " << ans << endl;
}