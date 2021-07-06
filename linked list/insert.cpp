#include <iostream>
#include <stdlib.h>
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
        h = t;
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
        cout << t->d;
        t = t->n;
    }
}
main()
{
    ins(5);
}