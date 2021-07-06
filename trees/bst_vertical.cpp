#include <iostream>
#include <map>
#include <vector>
using namespace std;
map<int, vector<int>> m;
int n, *a;
void mhs(int p, int v)
{
    if (p >= n)
        return;
    m[v].push_back(a[p]);
    mhs(2 * p + 1, v - 1);
    mhs(2 * p + 2, v + 1);
}
main()
{
    cin >> n;
    a = new int[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    mhs(0, 0);
    for (auto it = m.cbegin(); it != m.cend(); ++it)
    {
        for (int i = 0; i < (it->second).size(); i++)
            cout << (it->second)[i] << " ";
        cout << endl;
    }
}