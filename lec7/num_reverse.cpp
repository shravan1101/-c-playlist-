#include <iostream>
using namespace std;

int main()
{
    int num, d, rever;
    rever = 0;
    cout << "enter the num" << endl;
    cin >> num;

    while (num > 0)
    {
        d = num % 10;
        cout << d << endl;
        rever = (rever * 10) + d;
        num = num / 10;
    }
    cout << rever << endl;
    return 0;
}
