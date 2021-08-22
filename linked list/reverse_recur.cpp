#include "ll.h"
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