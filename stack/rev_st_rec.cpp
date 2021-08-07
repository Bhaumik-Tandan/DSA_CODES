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
int dispt()
{
    return a[t];
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
void rev()
{
    if(isEmpty())return;
    int t=pop();
     rev();
    insbot(t);
}
main()
{
    ins(1);
    ins(5);
    ins(3);
    disp();
    rev();
    disp();
}