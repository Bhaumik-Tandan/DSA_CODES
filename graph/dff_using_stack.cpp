#include <iostream>
#include <vector>
#include<map>
#include<queue>
#include<stack>
using namespace std;

void dfs(map<int,vector<int>> g,int n,int r)
{
    bool* v=new bool [n]();
    stack<int> s;
    s.push(r);
    v[r]=1;
    cout<<r<<" ";
    while(!(s.empty()))
    {
        int t=s.top();
        int f=0;
        for(int i=0;i<n;i++)
        if(g[t][i]==1 && v[i]==0)
        {
            v[i]=1;
            s.push(i);
            cout<<i<<" ";
            f=1;
            break;
        }
        if(f==0)
        s.pop();
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
    adde(g,2, 3);
    adde(g,1, 3);
    adde(g,3, 5);
    adde(g,5, 4);
    dfs(g,n,0);
}