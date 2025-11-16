#include <iostream>
#include <vector>

using namespace std;
void Rev(vector<int> &vec);

int main()
{
    vector<int> vec = {15, 92, 43, 24, 46, 78};

    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << "\t";
    }
    cout << endl;
    Rev(vec);
    return 0;
}

void Rev(vector<int> &vec)
{

    int start = 0, end = vec.size()-1, temp;
    while (start < end)
    {
        swap(vec[start], vec[end]);
        start++;
        end--;
    }
    for (int var : vec)
    {


        cout << var << "\t";
    }
    cout << endl;
}