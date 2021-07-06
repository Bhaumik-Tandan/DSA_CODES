#include <iostream>
#include <map>
#include <vector>
using namespace std;
int n;
bool *v;
map<int, bool *> g;
void bfs(int r)
{
    vector<int> ve;
    for (int i = 1; i <= n; i++)
        if (v[i - 1] == 0 && g[r][i - 1] == 1)
        {
            ve.push_back(i);
            cout << i << " ";
            v[i - 1] = 1;
        }
    for (int i = 0; i < ve.size(); i++)
        bfs(ve[i]);
}
main()
{
    int e;
    cin >> n >> e;
    v = new bool[n];
    for (int i = 1; i <= n; i++)
    {
        g[i] = new bool[n];
        v[i - 1] = 0;
    }
    for (int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;
        g[a][b - 1] = 1;
        g[b][a - 1] = 1;
    }
    int r;
    cin >> r;
    cout << r << " ";
    v[r - 1] = 1;
    bfs(r);
}