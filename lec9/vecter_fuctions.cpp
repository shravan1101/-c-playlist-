#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // size fuctions
    vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8};
    cout << "size =" << vec.size() << endl;

    vector<int> vec2;
    cout << "push_back " << endl;
    // push_back fuctions add the value to the back of the vector
    vec2.push_back(12);
    vec2.push_back(12);
    vec2.push_back(12);
    cout << "sixw" << vec2.size() << endl;
    // pop_bsack fuctions remove the last value in vectoe
    vec2.pop_back();
    cout << "sixw" << vec2.size() << endl;

    // front() print the frist index of the vector ;

    cout << vec2.front() << endl;

    // back () it Print the last value of the Vector;
    cout << vec2.back() << endl;
    return 0;
}