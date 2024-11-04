#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec;

    cout << "size = " << vec.size() << endl;
    vec.push_back(25);
    vec.push_back(35);
    vec.push_back(45);
    vec.push_back(55);
    vec.push_back(65);
    vec.push_back(75);

    cout << "After adding elements, size = " << vec.size() << endl;

    vec.pop_back();

    for (int val : vec)
    {
        cout << val << endl;
    }

    cout << vec.front() << endl;
    cout << vec.back() << endl;
    cout << vec.at(3) << endl;
    return 0;
}