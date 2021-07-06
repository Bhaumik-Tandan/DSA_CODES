#include <iostream>
using namespace std;
int *a = new int[100];
int f = 0, r = -1;
void enqueue(int n)
{
    a[++r] = n;
}
int dequeue()
{
    return a[f++];
}
main()
{
}