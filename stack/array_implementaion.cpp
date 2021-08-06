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
void menu()
{
    cout<<"\n1)Push\n2)Pop\n3)Display top\n4)Display whole stack\n5)Exit\nEnter your choice: ";
    int c;
    cin>>c;
    switch(c)
    {
        case 1:
        cout<<"\nEnter the number to be pushed: ";
        int n;
        cin>>n;
        ins(n);
        break;
        case 2:
        cout<<"\nYour element is: "<<pop();
        break;
        case 3:
        cout<<"\nTop: "<<dispt();
        break;
        case 4:
        cout<<"\nThe stack is: ";
        disp();
        break;
        default:
        exit(0);
    }
    menu();
}

main()
{
    menu();
}