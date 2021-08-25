#include <iostream>
#include <limits>
using namespace std;
int nearest(int d[],int n,int v[])
{
    int m=1000000;
    int l=0;
    for(int i=0;i<n;i++)
    if(v[i]==0 && d[i]<m)
    {
        l=i;
        m=d[i];
    }
    return l;
}  
void upd(int g[9][9], int d[10], int j, int i,int n)
{
    if (g[i][j] != 0)
        if (d[i] + g[i][j] < d[j])
            d[j] = d[i] + g[i][j];
}
void Dijkstra(int g[9][9], int n, int r)
{
    int dist[10],v[10];
    for (int i = 0; i < n; i++)
    {
        if (g[r][i] == 0)
            dist[i] = 1000000; //not connect should be infinity
        else
            dist[i] = g[r][i]; //connected should be given value
        v[i]=0;
    }
    dist[r] = 0;
    v[r]=1;
    for (int k = 0; k < n-1; k++)
    {
        int i=nearest(dist,n,v);     
        v[i]=1;
        for (int j = 0; j < n; j++)
                upd(g, dist, j, i,n);
    }
    for (int i = 0; i < n; i++)
        cout << dist[i] << " ";
}
int main()
{
    int i, j, n, u;
    n = 9;
    int Graph[9][9] = {{0, 4, 0, 0, 0, 0, 0, 8, 0},
                       {4, 0, 8, 0, 0, 0, 0, 11, 0},
                       {0, 8, 0, 7, 0, 4, 0, 0, 2},
                       {0, 0, 7, 0, 9, 14, 0, 0, 0},
                       {0, 0, 0, 9, 0, 10, 0, 0, 0},
                       {0, 0, 4, 14, 10, 0, 2, 0, 0},
                       {0, 0, 0, 0, 0, 2, 0, 1, 6},
                       {8, 11, 0, 0, 0, 0, 1, 0, 7},
                       {0, 0, 2, 0, 0, 0, 6, 7, 0}};

    // Graph[0][0] = 0;
    // Graph[0][1] = 4;
    // Graph[0][2] = 0;
    // Graph[0][3] = 0;
    // Graph[0][4] = 0;
    // Graph[0][5] = 0;
    // Graph[0][6] = 0;
    // Graph[0][7] = 8;
    // Graph[0][8] = 0;

    // Graph[1][0] = 4;
    // Graph[1][1] = 0;
    // Graph[1][2] = 8;
    // Graph[1][3] = 0;
    // Graph[1][4] = 0;
    // Graph[1][5] = 0;
    // Graph[1][6] = 0;
    // Graph[1][7] = 11;
    // Graph[1][8] = 0;

    // Graph[2][0] = 0;
    // Graph[2][1] = 8;
    // Graph[2][2] = 0;
    // Graph[2][3] = 7;
    // Graph[2][4] = 0;
    // Graph[2][5] = 4;
    // Graph[2][6] = 0;
    // Graph[2][7] = 0;
    // Graph[2][8] = 2;

    // Graph[3][0] = 0;
    // Graph[3][1] = 0;
    // Graph[3][2] = 7;
    // Graph[3][3] = 0;
    // Graph[3][4] = 9;
    // Graph[3][5] = 14;
    // Graph[3][6] = 0;
    // Graph[3][7] = 0;
    // Graph[3][8] = 0;

    // Graph[4][0] = 0;
    // Graph[4][1] = 0;
    // Graph[4][2] = 0;
    // Graph[4][3] = 9;
    // Graph[4][4] = 0;
    // Graph[4][5] = 10;
    // Graph[4][6] = 0;
    // Graph[4][7] = 0;
    // Graph[4][8] = 0;

    // Graph[5][0] = 0;
    // Graph[5][1] = 0;
    // Graph[5][2] = 4;
    // Graph[5][3] = 14;
    // Graph[5][4] = 10;
    // Graph[5][5] = 0;
    // Graph[5][6] = 2;
    // Graph[5][7] = 0;
    // Graph[5][8] = 0;

    // Graph[6][0] = 0;
    // Graph[6][1] = 0;
    // Graph[6][2] = 0;
    // Graph[6][3] = 0;
    // Graph[6][4] = 0;
    // Graph[6][5] = 2;
    // Graph[6][6] = 0;
    // Graph[6][7] = 1;
    // Graph[6][8] = 6;

    // Graph[7][0] = 8;
    // Graph[7][1] = 11;
    // Graph[7][2] = 0;
    // Graph[7][3] = 0;
    // Graph[7][4] = 0;
    // Graph[7][5] = 0;
    // Graph[7][6] = 1;
    // Graph[7][7] = 0;
    // Graph[7][8] = 7;

    // Graph[8][0] = 0;
    // Graph[8][1] = 0;
    // Graph[8][2] = 2;
    // Graph[8][3] = 0;
    // Graph[8][4] = 0;
    // Graph[8][5] = 0;
    // Graph[8][6] = 6;
    // Graph[8][7] = 7;
    // Graph[8][8] = 0;

    u = 0;
    Dijkstra(Graph, n, u);

    return 0;
}