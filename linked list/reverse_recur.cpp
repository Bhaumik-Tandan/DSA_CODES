//reverse a linked list recursively
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
void reverse(struct node *c)
{
    if (!(c->n))
    {
        h = c;
        return;
    }
    reverse(c->n);
    c->n->n = c;
    c->n = 0;
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
    reverse(h);
    disp();
}