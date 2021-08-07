#include <iostream>
using namespace std;
int *a = new int[100];
int t=-1; 
void ins(int n)
{
    a[++t] = n;
}
int pop()
{
    return a[t--];
}
int dispt()
{
    return a[t];
}
void disp()
{
    for (int i = t ; i >= 0; i--)
        cout << a[i] <<" ";
}
bool isEmpty()
{
    if(t==-1)
    return 1;
    return 0;
}
void insbot(int n)
{
    if(isEmpty()){
    ins(n);
    return;
    }
    int a=pop();
    insbot(n);
    ins(a);
}
main()
{
    ins(1);
    ins(5);
    ins(3);
    insbot(8);
    disp();
}