#include <iostream>
#include <vector>

using namespace std;

vector<int> optimfine(vector<int> test, int targest)
{
    int ps, i, j;
    while (i < j)
    {
        ps = test[i] + test[j];
        if (ps > targest)
            j--;

        else if (ps < targest)
            i++;

        else
        {
            test.push_back(i);
            test.push_back(j);
            return test;
        }
    }
}

int main()
{
    vector<int> qu = {1, 2, 3, 12, 13};
    int target = 14;

    vector<int> final = optimfine(qu, target);
    // for (int var : qu)
    // {
    //     cout << var << endl;
    // }

    for (int i = 0; i < final.size(); i++)
    {
        cout << final[i] << endl;
    }

    return 0;
}