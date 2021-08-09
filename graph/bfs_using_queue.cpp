#include <iostream>
#include <vector>
#include<map>
#include<queue>
using namespace std;

void bfs(map<int,vector<int>> g,int n,int r)
{
    bool* v=new bool [n]();
    queue<int> q;
    q.push(r);
    v[r]=1;
    while(!(q.empty()))
    {
        int f=q.front();
        cout<<f;
        q.pop();
        for(int i=0;i<n;i++)
        if(g[f][i]==1 && v[i]==0)
        {
            v[i]=1;
            q.push(i);
        }
    }

}
void adde(map<int,vector<int>> &g,int a,int b)
{
        g[a][b] = 1;
        g[b][a] = 1;
}
main()
{
    map<int,vector<int>> g;
    int n,e;
    // cin >> n >> e;
    n=6;
    e=6;
    for(int i=0;i<n;i++)
    g[i]=vector<int>(n,0);
    // for (int i = 0; i < e; i++)
    // {
    //     int a, b;
    //     cin >> a >> b;
    //     g[a][b] = 1;
    //     g[b][a] = 1;
    // }
    adde(g,0, 2);
    adde(g,1, 4);
    adde(g,2, 4);
    adde(g,1, 3);
    adde(g,3, 5);
    adde(g,5, 4);
    bfs(g,n,0);
}