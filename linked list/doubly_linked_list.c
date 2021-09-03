#include<stdio.h>
struct node
{
    int d;
    struct node *n;
    struct node *p;
} * h;

ins_r(int n)
{
    struct node *t = (struct node *)malloc(sizeof(struct node));
    t->d = n;
    t->n = 0;
    printf("\n%d inserted at rear",n);
    if (!h){
        h = t;
        return;
    }
    struct node *p = h;
    while (p->n)
        p = p->n;
    p->n = t;
    t->p=p;
}

del_r()
{
    if (!h || !(h->n))
    {
        h=0;
        return;
    }
    struct node *p = h;
    while (p->n->n)
        p = p->n;
    p->n=0;
}

ins_f(int n)
{
    struct node *t = (struct node *)malloc(sizeof(struct node));
    printf("\n%d inserted at front",n);
    t->d = n;
    t->n = h;
    t->p=0;
    if(h)
    h->p=t;
    h=t;
}
disp()
{
    struct node *t = h;
    printf("\n");
    while (t)
    {
        printf("%d ",t->d);
        t = t->n;
    }
}

ins_p(int n,int po)
{
    struct node *t = (struct node *)malloc(sizeof(struct node));
    t->d = n;
    t->n = 0;
    printf("\n%d inserted at position %d",n,po);
    if (!h)
    {
        h = t;
        return;
    }
    struct node *p = h;
    while (p->n && --po>0)
        p = p->n;
    p->n = t;
    t->p=p;
}

del_f()
{
    if(!h)
    return;
    h=h->n;
    if(h)
    h->p=0;
}

del_p(int po)
{
    if (!h || !(h->n))
    {
        h = 0;
        return;
    }
    struct node *p = h;
    while (p->n->n && --po>1)
        p = p->n;
    struct node *t=p->n;
    p->n=t->n;
    t->n->p=p;
}

main()
{
    ins_r(21);
    ins_f(42);
    ins_f(4290);
    ins_r(90);
    disp();
    del_r();
    disp();
    del_f();
    disp();
    ins_f(426);
    ins_r(490);
    disp();
    del_p(2);
    disp();
}