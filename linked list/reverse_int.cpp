//reverse a linked list iterative
#include "ll.h"
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