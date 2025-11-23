#include <iostream>
#include <vector>
using namespace std;

vector<int> pair_sum(vector<int> num, int target)
{
    vector<int> ans;
    int n = num.size();

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (num[i] + num[j] == target)
            {
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return ans;
}

int main()
{
    vector<int> ans = {2, 7, 11, 15};
    int target = 9;
    vector<int> Final_ans = pair_sum(ans, target);

    for (int val : Final_ans)
    {
        cout << Final_ans[val];
    }
    return 0;
}