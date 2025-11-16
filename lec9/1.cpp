#include <iostream>
#include <vector>

using namespace std;

int main()
{ // vector use {} instead of arry ;
    // vector SYStax
    vector<int> vec1;
    // inisatisations
    vector<int> vec2 = {1, 2, 3};
    //
    vector<int> vec3(3, 0);
    cout << vec3[0] << endl;
    cout << vec3[1] << endl;
    cout << vec3[2] << endl;

    cout << vec2[1] << endl;

    // using for each Loop for inteager and Char ;
    // using the for each loop the vector is stored in val not like arry its arr[i]:
    // for (int val : vec2)
    // {
    //     cout << val << endl;
    // }

    // for (int val : vec3)
    // {
    //     cout << val << endl;
    // }

    vector<char> vec4 = {'a', 'b', 'c', 'd'};

    for (char cha : vec4)
    {
        cout << cha << endl;
    }

    return 0;
}