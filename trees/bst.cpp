#include <iostream>
using namespace std;
struct node
{
    int d;
    struct node *r, *l;
} * r;
void ins(int a)
{
    struct node *t = new struct node;
    t->d = a;
    t->r = 0;
    t->l = 0;
    if (!r)
    {
        r = t;
        return;
    }
    struct node *p = r;
    while (true)
    {
        if (p->d > a)
            p = p->r;
        else
            p = p->l;
    }
}
main()
{
    int n;
    cin >> n;
    for (int i; i < n; i++)
    {
        int t;
        cin >> t;
        ins(t);
    }
}