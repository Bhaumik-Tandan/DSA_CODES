#include <stdio.h>
struct node
{
    int d;
    struct node *n;
    struct node *p;
} * f, *r;

struct node *make_node(int a, struct node *n, struct node *p)
{
    struct node *t = (struct node *)malloc(sizeof(struct node));
    t->d = a;
    t->n = n;
    t->p = p;
    return t;
}

add_rear(int a)
{
    printf("\n%d inserted at the rear",a);
    if (!f)
    {
        f=r=make_node(a,0,0);
        return;
    }
    struct node *p = f;
    while (p->n)
        p = p->n;
    p->n=make_node(a,0,p);
    r=p->n;
}

add_front(int a)
{
    printf("\n%d inserted at the front",a);
    if (!f)
    {
        f=r=make_node(a,0,0);
        return;
    }

    f=make_node(a,f,0);
    f->n->p=f;
}

del_front()
{
    if(!f)
    return;
    int a=f->d;
    f=f->n;
    if(f)
    f->p=0;
    return a;
}

del_rear()
{
    if(!f)
    return;
    int a=r->d;
    r=r->p;
    if(r)
    r->n=0;
    return a;
}

disp()
{
    struct node *t = f;
    printf("\n");
    while (t)
    {
        printf("%d ",t->d);
        t = t->n;
    }
}

main()
{
    add_rear(3);
    add_front(23);
    add_rear(94);
    disp();
    printf("\n %d deleted from front",del_front());
     add_front(4);
     add_rear(232);
     disp();
   printf("\n %d deleted from rear",del_rear());
   disp();
}