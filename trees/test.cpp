#include <iostream>
#include <vector>
using namespace std;

main()
{
    vector<int> a;
    a.push_back(3);
    a.push_back(3);
    for (int i = 0; i < a.size(); i++)
        cout << a[i];
}