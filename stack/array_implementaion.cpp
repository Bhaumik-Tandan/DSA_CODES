#include <iostream>
using namespace std;
int *a = new int[100];
int t; //t=0
void ins(int n)
{
    a[t++] = n;
}
int pop()
{
    return a[t--];
}
void disp()
{
    for (int i = t - 1; i >= 0; i--)
        cout << a[i] << endl;
}
main()
{
    ins(1);
    ins(2);
    ins(3);
    pop();
    disp();
}