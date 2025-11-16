#include <iostream>
#include <vector>

using namespace std;
void Rev(vector<int> vec)
{
    int start = 0, end = vec.size() - 1, temp;
    while (start < end)
    {
        swap(vec[start], vec[end]);
        start++;
        end++;
    }
    for (int var : vec)
    {
        cout << var << "";
    }
}

int main()
{
    vector<int> vec = {15, 92, 43, 24, 46, 78, 45, 34};
    Rev(vec);
    return 0;
}