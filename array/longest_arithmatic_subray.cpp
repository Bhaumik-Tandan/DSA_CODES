#include <iostream>
#include <vector>
using namespace std;
main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int p = 0, l = 0, a = -1, i = 0, ld = -1;
    while (i < n - 1)
    {
        int k = v[i + 1] - v[i];
        if (k == ld)
        {
            l++;
        }
        else
        {
            p = i;
            l = i + 1;
            ld == k;
        }
    }
}