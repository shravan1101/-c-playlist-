#include <vector>
#include <iostream>

using namespace std;

int main()
{
    int search;
    vector<int> vec = {1, 2, 3, 5, 2, 34, 56};
    cout << "what do you want to seac=rc" << endl;
    cin >> search;
    for (int i = 0; i < vec.size(); i++)
    {
        if (vec[i] == search)
        {
            cout<<"element found at index"<<i+1<<endl;
            break;
        }
    }

    return 0;
}