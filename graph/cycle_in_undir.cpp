#include <iostream>
#include <vector>
#include<map>
#include<queue>
using namespace std;

bool bfs(map<int,vector<int>> g,int n,int r)
{
    bool* v=new bool [n]();
    bool* gr=new bool [n]();
    queue<int> q;
    q.push(r);
    v[r]=1;
    gr[r]=1;
    while(!(q.empty()))
    {
        int f=q.front();
        gr[f]=0;
        q.pop();
        for(int i=0;i<n;i++)
        if(g[f][i]==1)
        {
            if(v[i]==0){
            v[i]=1;
            q.push(i);
            gr[i]=1;}
            else if(gr[i]==1)
            return 1;
        }
    }
    return 0;

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
    adde(g,2, 3);
    adde(g,2, 4);
    adde(g,1, 3);
    adde(g,3, 5);
    adde(g,5, 4);
    cout<<bfs(g,n,0);
}