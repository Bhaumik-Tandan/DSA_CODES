#include <iostream>
using namespace std;
struct node{
    int d;
    struct node *n;
}*h;

void ins(int n)
{
    struct node *t=new struct node;
    t->d=n;
    t->n=h;
    h=t;    
}

int pop()
{
    int t=h->d;  
    h=h->n; 
    return t;
}
int dispt()
{
    return h->d;
}
void disp()
{
    struct node *t=h;
    while (t)
    {
        cout<<t->d<<" ";
        t=t->n;
    }    
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