#include <iostream>
#include <map>
using namespace std;
main()
{
    int n;
    cin >> n;
    map<int, int> ar;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        ar[t]++;
    }
    for (auto it = ar.cbegin(); it != ar.cend(); ++it)
    {
        cout << "{" << (*it).first << ": " << (*it).second << "}\n";
    }
}