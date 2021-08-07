#include <iostream>
using namespace std;
int *a = new int[100];
int f = 0, r = -1;

bool isemp()
{
    if(f>r)
    return 1;
    return 0;
}
void enqueue(int n)
{
    a[++r] = n;
}
int dequeue()
{
    return a[f++];
}

void disp()
{
    for(int i=f;i<=r;i++)
    cout<<a[i]<<" ";
}
void menu()
{
    cout<<"\n1)Enqueue\n2)Dequeue\n3)Display whole Queue\n4)Exit\nEnter your choice: ";
    int c;
    cin>>c;
    switch(c)
    {
        case 1:
        cout<<"\nEnter the number to be pushed: ";
        int n;
        cin>>n;
        enqueue(n);
        break;
        case 2:
        if(isemp()){
        cout<<"\nQueue is empty";
        break;
        }
        cout<<"\nYour element is: "<<dequeue();
        break;
        case 3:
        if(isemp()){
        cout<<"\nQueue is empty";
        break;
        }
        cout<<"\nQueue is: ";
        disp();
        break;
        default:
        exit(0);
    }
    menu();
}