#include <iostream>
using namespace std;

int main()
{
    int dec_num, ans, pow, rem;
    ans=0;
    pow=1;
    cout << "enter a number " << endl;
    cin >> dec_num;
    while (dec_num > 0)
    {
        rem = dec_num % 2;
        dec_num = dec_num / 2;
        ans = (pow * rem) + ans;
        pow = pow * 10;
    }

    cout << "binary num is " << ans << endl;

    // int a;
    // cout << "eneter a Decimal number" << endl;
    // cin >> a;12

    // string bit_cv="";
    // int bit;
    // while (a > 0)
    // {
    //     bit = a % 2;
    //     bit_cv = to_string(bit)+bit_cv;
    //     a=a/2;
    // }

    // cout<<"binary\t"<<bit_cv<<endl;

    return 0;
}
