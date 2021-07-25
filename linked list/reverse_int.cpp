//reverse a linked list iterative
#include <iostream>
using namespace std;
struct node
{
    int d;
    struct node *n;
} * h;
void ins(int n)
{
    struct node *t = (struct node *)malloc(sizeof(struct node));
    t->d = n;
    t->n = 0;
    if (!h)
    {
        h = t;
        return;
    }
    struct node *p = h;
    while (p->n)
        p = p->n;
    p->n = t;
}
void disp()
{
    struct node *t = h;
    while (t)
    {
        cout << t->d << " ";
        t = t->n;
    }
}
void reverse()
{
    struct node *p = 0, *t = h;
    while (t)
    {
        struct node *temp = t->n;
        t->n = p;
        p = t;
        t = temp;
    }
    h = p;
}
main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        ins(t);
    }
    reverse();
    disp();
}