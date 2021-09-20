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
    t->d = n;
    t->n = h;
    t->p=0;
    if(h)
    h->p=t;
    h=t;
}

void disp(int type)//0 denote ele 1 denote address
{
    printf("\n");
    struct node *t = h;
    while (t)
    {
        if(type)
        printf("%d->",t);
        else
        printf("%d->",t->d);
        t = t->n;
    }

    printf("%s",t);
}

ins_p(int n,int po)
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

void takeinput()
{
    h=0;
    int n;
    printf("\nEnter the length of the number of elements: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++)
    {
        int t;
        scanf("%d",&t);
        ins_r(t);
    }
}