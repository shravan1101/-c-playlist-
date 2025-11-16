#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "eneter a Decimal number" << endl;
    cin >> a;
    int bit;
    while (a > 0)
    {
        bit = a % 2;
        cout<<bit;
        a=a/2;
    }

    return 0;
}