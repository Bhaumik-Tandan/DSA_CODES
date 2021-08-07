// reverse a stack using recursion
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


bool isEmpty()
{
    if(t==-1)
    return 1;
    return 0;
}
void disp()
{
    if(isEmpty()){
    cout<<"\nStack Empty";
    return;
    }
    cout<<"\nStack is: ";
    for (int i = t ; i >= 0; i--)
        cout << a[i] <<" ";
}
int dispt()
{
    if(!isEmpty())
    return a[t];
    return -1;
}
void insort(int t)
{
    if(isEmpty() || dispt()<=t)
    {
        ins(t);
        return;
    }
    int te=pop();
    insort(t);
    ins(te);
}
void sort()
{
    if(isEmpty())
    return;
    int t=pop();
    sort();
    insort(t);
}
main()
{
    ins(1);
    ins(5);
    ins(3);
    ins(7);
    ins(6);
    disp();
    sort();
    disp();
}